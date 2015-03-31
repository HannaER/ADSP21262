#include "hamming.h"

void hamming(float* input, float* output){	
	int i;
	for(i = 0; i < BLOCK_LENGTH; i++){
		output[i] = hamming_window[i]*input[i];
	}
	return;	
}

