#include <stdio.h>
#include "constants.h"
#include "buffer.h"
#include "cut.h"

int i;	
static float threshold = 0;

void cut(block_t* input, int* first, int* last){ 
	int counter = 0;

	float new_threshold = 0;
	float temp_energy = 0;
	/*for(i = 0; i < N_BLOCKS + BUFFER; i++){ // FORWARD
		temp_energy = input[i].energy;
		if (i == 0){
			threshold = temp_energy;	
		}
		new_threshold = temp_energy*0.05 + threshold*0.95;		
		if (new_threshold > 1.12*threshold){
			counter = counter + 9;
			if(counter > 45) {
			*first = i - 1; // save the previous block as well
			break;
			}
		} else if(new_threshold <= 0.9*threshold){
			counter = counter - 10;
			if (counter < 0){
				counter = 0;
				break;
			}

		}
		threshold = new_threshold;
			
	}
	if(*first < 0){
		*first = 0;
	}*/	
	for(i = 0; i < N_BLOCKS + BUFFER - *first; i ++){ // BACKWARD
		counter = 0;
		new_threshold = 0;
		temp_energy = input[N_BLOCKS + BUFFER - i].energy;
		if(i == 0){
			threshold = temp_energy;
		}
		new_threshold = temp_energy*0.05 + threshold*0.95;
		if(new_threshold > 1.12*threshold){
			counter = counter + 9;
			if(counter > 45){
				*last = N_BLOCKS + BUFFER - (i + 1); // save the next block as well
				break;
			}
		} else {
			counter = counter - 10;
			if (counter < 0){
				counter = 0;
			}
		}
		threshold = new_threshold;		
	}
	if(*last >= N_BLOCKS + BUFFER || *last == 0){
		*last = N_BLOCKS + BUFFER;
	}
	
}


