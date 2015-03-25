#include <stdio.h>
#include "constants.h"
#include "buffer.h"
#include "level_detect.h"

static float norm = 0;
static float energy = 0;
static float threshold;
int i;	

// input is a vector of length BLOCK_LENGTH consisting of the recent samples
int level_detect(float* input){ 
	static int counter = 0;
	static int block = 1;
	
	
	int output = 0;
	norm = calc_norm(input);
	
	float new_threshold = 0;
	new_threshold = norm*0.05 + threshold*0.95;
	
	if (new_threshold > 1.12*threshold){ // 1.12
		counter = counter + 9;
		if(counter > 45) {
		output = 1; // true			
		} else if(counter <= 36) {
		put(input);
		output = 0;	
		}

	} else if(new_threshold <= 1.12*threshold){
		counter = counter - 10;
		put(input);	// add to ringbuffer
		if (counter < 0){
			counter = 0;
		}
		output = 0; // false	
	}
	threshold = new_threshold;
	block = block + 1;
	return output;
	
}
void set_threshold(float th){
		threshold = th;	
}

float calc_norm(float* input){
	float temp = 0;
	norm = 0;
	energy = 0;
	for(i = 0; i < BLOCK_LENGTH; i++){ 
		temp = input[i];
		norm = norm + (temp)*(temp);
		if(temp >= 0){
			energy = energy + temp;
		} else if (temp < 0){
			energy = energy - temp;	
		}
	}	
	return norm;	
}

float calc_energy(float* input){
	float temp = 0;
	energy = 0;
	for(i = 0; i < BLOCK_LENGTH; i++){ 
		temp = input[i];
		if(temp >= 0){
			energy = energy + temp;
		} else if (temp < 0){
			energy = energy - temp;	
		}
	}	
	return energy;
}

float get_energy(void){
	return energy;
}

