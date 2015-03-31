#include "cut.h"
#define alfa 0.99
#define beta 0.8
#define threshold 5
int i;	
// Cuts backwards, first stays = 0
void cut(block_t* input, int* first, int* last){ 
	float E_L = input[N_BLOCKS + BUFFER].energy;
	float E_S = E_L;
	float R;
	float temp_energy;
	for(i = 0; i < N_BLOCKS + BUFFER; i++){
		temp_energy = input[N_BLOCKS + BUFFER - i].energy;
		E_L = alfa*E_L + (1 - alfa)*temp_energy;
		E_S = beta*E_S + (1 - beta)*temp_energy;
		R = E_S/E_L; 
		if(R > threshold){
			*last = N_BLOCKS + BUFFER - i;
			break;
		}
	}
}

