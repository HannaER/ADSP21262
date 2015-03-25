#include <stdio.h>
#include "constants.h"
#include <filter.h>

#define TAPS 1//2
#define SAMPLES OVERLAP

float pm fircoeffs[TAPS] = {1};//{-0.97, 1};
static float firstate[TAPS+1] = {0};

void pre_emph(float* input, float* output){
	
	/* coeffs array must be */
	/* initialized and in PM memory */
	//fir(input, output, fircoeffs, firstate, SAMPLES, TAPS);
	int i;
	for(i = 0; i <160; i++){
		output[i] = input[i];
	}
	
}
