#include "create_subsets.h"

static version_t output;
void create_subsets(block_t* input, int first, int last, version_t* out){
	
	// input är en lista med block t som har reflec.coeff. för blocket

	
	int integer = (last - first + 1)/SUBSET_LENGTH;
	int remainder = (last - first + 1)%(SUBSET_LENGTH);
		
	float div1 = 1/((float)(integer + 1));
	float div2 = 1/((float)integer);
	
	int i, j, k;
	int start = first;
	int stop = 0;
	
	if(integer > 1){
		for(i = 0;i < SUBSET_LENGTH; i++){
			if(i < remainder){
				stop = stop + integer + 1;
				for(j = 0; j < N_REFLEC; j++){
					output.subset[i].reflect[j] = 0;
					for(k = start; k < stop; k++){
						output.subset[i].reflect[j] = output.subset[i].reflect[j] + input[k].reflect[j]*div1;
					}
				}
				start = start + integer + 1;
			} else{
				stop = stop + integer;
				for(j = 0; j < N_REFLEC; j++){
					output.subset[i].reflect[j] = 0;					
					for(k = start; k < stop; k++){
						output.subset[i].reflect[j] = output.subset[i].reflect[j] + input[k].reflect[j]*div2;	
					}
				}
				start = start + integer;
			}
		}
	} else { // integer <= 1 
		for(i = 0; i < SUBSET_LENGTH; i++){		
			for(j = 0; j < N_REFLEC; j++){
				output.subset[i].reflect[j] = 0;									
			}	
		}
		for(i = 0; i < (last - first + 1); i++){		
			for(j = 0; j < N_REFLEC; j++){
				output.subset[i].reflect[j] = + input[i].reflect[j];				
			}	
		}
	}
	*out = output;	
	return;	
}
