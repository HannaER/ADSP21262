
/*****************************************************************************
 * speechrecognition.c
 *****************************************************************************/
//bibliotek
#include <stdio.h>
#include <stdlib.h>
#include <processor_include.h>
#include <signal.h>

// funktioner och defines
#include "framework.h"
#include "constants.h"
#include "load_db.h"
#include "rm_noise.h"
#include "hamming.h"
#include "level_detect.h"
#include "buffer.h"
#include "Levinson.h"
#include "cut.h"
#include "create_subsets.h"
#include "matching.h"


// includes för tester

//#include <string.h>
//#include "fft_.h"
//#include "getX.h"
//#include "test_signal.h"
//#include "test_db.h"

// testar get_x, iir och pre_emph
//float y[901];
//float x[901];
//float z[901];
//float overlapping_samples[OVERLAP]; // vektor där senaste samplade värdena sparas


// for recordings
FILE* fp;

		
		
static block_t record[N_BLOCKS + BUFFER]; // lista med structs som är inspelningen
static float sample_old[OVERLAP] = {0};
static float sample_new[OVERLAP] = {0};
static float sample_temp[OVERLAP] = {0};
static float current_block[BLOCK_LENGTH];
static float temp_block[BLOCK_LENGTH];
static version_t version;
//static db_t const pm* current_db;

static int state = 0;
static int counter = 0;

/*
void process(int sig){
	sample_t* audioin = dsp_get_audio();
	sample_t* audioout = dsp_get_audio();    	
	int i,j, k;

	
	if(state == 0){	// init	
		float init_energy;		
		for(i = 0; i < DSP_BLOCK_SIZE; ++i){
			sample_temp[i] = audioin[i].left;
			//printf("%f, \n", sample_temp[i]);
		}
		rm_noise(sample_temp,sample_old);
		init_energy = calc_energy(sample_old);
		set_energy(init_energy, init_energy);
		state = 1;
		return;
	}	
	if(state == 1){ // check level detection
		for(i = 0; i < DSP_BLOCK_SIZE; ++i){
			sample_new[i] = audioin[i].left;
		}
		rm_noise(sample_new,sample_temp);
		//for(j=0; j < DSP_BLOCK_SIZE; ++j) {
        //	audioout[j].left = sample_temp[j];
        //	audioout[j].right = sample_temp[j];
    	//}
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
		//for(j=0; j < DSP_BLOCK_SIZE; ++j) {
        //	audioout[j].left = sample_temp[j];
        //	audioout[j].right = sample_temp[j];
    	//}
		for(j = 0; j < OVERLAP; j++){
			current_block[j] = sample_old[j];
			current_block[OVERLAP + j] = sample_temp[j];
			sample_old[j] = sample_temp[j];
		}
		update_energy(current_block);
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
		matching(&current_db, &version);
		state = 1;		
		return;	
	}
	return;
}*/

void recording(int sig){
	sample_t* audioin = dsp_get_audio();
	sample_t* audioout = dsp_get_audio(); 
	int i, res;
	static int counter = 1;
	float temp_samp;
	int rec_length = 10;
	char temp_str[10];
	if(counter == 1){
		printf("Starts recording now\n");
		fprintf(fp, "rec = [ \n", counter);	
	}
	if(counter <= 150){
		for(i = 0; i < DSP_BLOCK_SIZE; ++i){
			temp_samp = audioin[i].left; 
			fprintf(fp, "%f, \n", temp_samp);
			//snprintf(temp_str, 10, "%f, \n", temp_samp);	
			//res = fwrite(&temp_str, sizeof(char), rec_length,fp);
			//if(res != rec_length){
			//	printf("fwrite not successful");
			//}
		} 
		counter = counter + 1;
	} if(counter == 151) {
		fprintf(fp, "]; \nsoundsc(rec);\n",counter);		
		fclose(fp);
		printf("Finished recording\n");
		counter = counter + 1;
		exit(1);
		return;
	}
	return;
}

int main(void)
{	

	int run = 1;
	dsp_init();
	//interrupt(SIG_SP1, process);
	fp = fopen("recording.txt", "w");
	if(!fp){
		printf("fopen not successful\n");
	}
	interrupt(SIG_SP1, recording);
	
	dsp_start();

	while(run){
		idle();	
	}
	return 0;
}












