#include "level_detect.h"
#define alfa 0.99
#define beta 0.8
#define threshold 7

static float energy = 0;
static float* temp_input;
int i, output;	
float P_L;
float P_S;

void set_energy(float pl, float ps){ 
		P_L = pl;
		P_S = ps;	
}

float calc_energy(float* input){
	float temp = 0;
	energy = 0;
	for(i = 0; i < BLOCK_LENGTH; i++){ 
		temp = input[i];
		energy = energy + temp*temp;
	}	
	return energy;
}

float get_energy(void){ 
	return energy;
}


void update_energy(float* input){ 
	//hamming(input, temp_input);
	energy = calc_energy(input);
	P_L = alfa*P_L + (1 - alfa)*energy;
	P_S = beta*P_S + (1 - beta)*energy;
}


// input is a vector of length BLOCK_LENGTH consisting of the recent samples
int level_detect(float* input){ 
	update_energy(input);
	float R = P_S/P_L;
	if(R >= threshold){
		output = 1;			
	} else {
		output = 0;
		put(input);	
	}
	return output;
}
