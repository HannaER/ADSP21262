
/*****************************************************************************
 * speechrecognition.c
 *****************************************************************************/
//bibliotek
#include <stdio.h>
#include <processor_include.h>
#include <signal.h>

// funktioner och defines
#include "constants.h"
#include "Levinson.h"
#include "rm_noise.h"
#include "level_detect.h"
#include "buffer.h"
#include "cut.h"
#include "create_subsets.h"
#include "matching.h"
#include "framework.h"
#include "hamming.h"
#include "load_db.h"

// includes f�r tester

//#include <string.h>
//#include "fft_.h"
//#include "getX.h"
//#include "test_signal.h"


// testar get_x, iir och pre_emph
//float y[901];
//float x[901];
//float z[901];
//float overlapping_samples[OVERLAP]; // vektor d�r senaste samplade v�rdena sparas




static block_t record[N_BLOCKS + BUFFER]; // lista med structs som �r inspelningen
static float sample_old[OVERLAP] = {0};
static float sample_new[OVERLAP] = {0};
static float sample_temp[OVERLAP] = {0};
static float current_block[BLOCK_LENGTH];
static float temp_block[BLOCK_LENGTH];
static version_t version;
static db_t current_db;

static int state = 0;
static int counter = 0;
int threshold;


void process(int sig){


	sample_t* audioin = dsp_get_audio();
	sample_t* audioout = dsp_get_audio();    	
	int i,j, k;
	
	if(state == 0){	// init			
		for(i = 0; i < DSP_BLOCK_SIZE; ++i){
			sample_temp[i] = audioin[i].left;
		}
		rm_noise(sample_temp,sample_old);
		threshold = calc_norm(sample_old);
		set_threshold(threshold);
		state = 1;
		return;
	}	
	if(state == 1){ // check level detection
		for(i = 0; i < DSP_BLOCK_SIZE; ++i){
			sample_new[i] = audioin[i].left;
		}
		rm_noise(sample_new,sample_temp);
		for(j=0; j < DSP_BLOCK_SIZE; ++j) {
        	audioout[j].left = sample_temp[j];
        	audioout[j].right = sample_temp[j];
    	}
		for(i = 0; i < OVERLAP; i++){
			current_block[i] = sample_old[i];
			current_block[OVERLAP + i] = sample_temp[i];
			sample_old[i] = sample_temp[i];
		}		
		if(level_detect(current_block)){ 
			dsp_set_leds(42);
			hamming(current_block, temp_block);				
			levinson(temp_block, record[BUFFER].reflect);
			record[BUFFER].energy = get_energy();
			state = 2;
			return;				
		}
	}
	if(state == 2){ // sample 1.5 seconds
		for(i = 0; i < DSP_BLOCK_SIZE; ++i){
			sample_new[i] = audioin[i].left;
		}
		rm_noise(sample_new,sample_temp);
		for(j=0; j < DSP_BLOCK_SIZE; ++j) {
        	audioout[j].left = sample_temp[j];
        	audioout[j].right = sample_temp[j];
    	}
		for(j = 0; j < OVERLAP; j++){
			current_block[j] = sample_old[j];
			current_block[OVERLAP + j] = sample_temp[j];
			sample_old[j] = sample_temp[j];
		}
		hamming(current_block, temp_block);
		levinson(temp_block, record[BUFFER + 1 + counter].reflect);
		record[BUFFER + 1 + counter].energy = calc_energy(temp_block);
		counter = counter + 1;
		if(counter == N_BLOCKS - 1){
			state = 3;
			counter = 0;
			return;
		}
		return;
	}
	if(state == 3){ // add buffer elements, cut --> subsets
		i = 0;
		while(poll(temp_block)){
			hamming(temp_block, current_block);
			levinson(current_block, record[i].reflect );
			record[i].energy = calc_energy(current_block);
			i += 1;
		}
		int first = 0;
		int last = 0;
		cut(record, &first, &last);
		create_subsets(record, first, last, &version);
		matching(current_db, version);
		state = 1;		
		return;	
	}
	return;
}

int main(void)
{	
	
	int run = 1;
	load_db(&current_db);

	dsp_init();
	
	interrupt(SIG_SP1, process);
	
	dsp_start();

	while(run){
		idle();	
	}
	

	return 0;
}












