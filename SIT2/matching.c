#include "matching.h"

#define THRESHOLD_MIN	N_REFLEC*0.14*N_VERSIONS
#define THRESHOLD_LEFT	THRESHOLD_MIN
#define THRESHOLD_RIGHT THRESHOLD_MIN*1.3

static float real_abs(float value)
{
    if (value < 0) {
        return -value;
    }
    return value;
}

void matching(db_t const pm* current_database, version_t *input){
   
	result_t result[N_WORDS];  
    float div = 1/((float)N_VERSIONS);
    float div1 = 1/((float)SUBSET_LENGTH);
	//float mean_energy = 0;
    float min_error = 0;
    float temp_min_err;
    int i, j, k, l;
    for(i = 0; i < N_WORDS; ++i){
    	word_t const pm* temp_word = current_database->words[i];
    	result[i].min_err = FLT_MAX;
    	result[i].mean_err = 0;
    	result[i].name = temp_word->name;
        for(j = 0 ; j < N_VERSIONS; ++j){       	
            version_t const pm* temp_version = temp_word->versions[j];             
            for(k = 0; k < SUBSET_LENGTH; ++k){
            	block_t temp_block = temp_version->subset[k];
            	block_t temp_input = input->subset[k];
            	//mean_energy = mean_energy  + temp_input.energy*div1;
            	for(l = 0; l < N_REFLEC; ++l){
            		temp_min_err = temp_input.reflect[l];
            		min_error = min_error +  real_abs(temp_block.reflect[l] - temp_min_err);
            		//mean_error = mean_error + min_error;
           		}
      	   }
      	   if (min_error < result[i].min_err) {
      	   		result[i].min_err = min_error;      	   						
	  	    }
	  	    result[i].mean_err = result[i].mean_err + min_error*div; 
     		min_error = 0;
        }
    }
	
	validation(result);
	return;
}
/* for tests
static int counter = 0;
static int vanster = 0;
static int hoger = 0;
static int fel = 0;*/

void validation(result_t* results){
	
	int i;
	float temp_min = FLT_MAX;
	float temp_mean = FLT_MAX;
	char* name_min = "";
	char* name_mean = "";
	for(i = 0 ; i < N_WORDS; ++i){		
		if(temp_min > results[i].min_err){
			temp_min = results[i].min_err;
			name_min = results[i].name;
		}
		if(temp_mean > results[i].mean_err){
			temp_mean = results[i].mean_err;
			name_mean = results[i].name;
		}		
	} 
	
	
	//if(strcmp(name_min, name_mean) == 0 && temp_min < THRESHOLD_MIN ){
	//	if(temp_min < THRESHOLD_MIN && temp_mean < THRESHOLD_MEAN){
	if(strcmp(name_min, name_mean) == 0){	
	//if(temp_min < THRESHOLD_MIN){
		if(strcmp(name_min, "right" ) == 0 && temp_min <THRESHOLD_RIGHT){
			printf("The matched word is \"%s\". Min-error: %f Mean-error: %f \n", name_min, temp_min, temp_mean);
			dsp_set_leds(7);
			//hoger = hoger + 1;
			return;
		}
		if(strcmp(name_min, "left") == 0  && temp_min < THRESHOLD_LEFT){
			printf("The matched word is \"%s\". Min-error: %f Mean-error: %f \n", name_min, temp_min, temp_mean);			
			dsp_set_leds(56);
			//vanster = vanster +1 ;
			return;
		} else {
			printf("No matching word found, try again! Min-error: %f Mean-error: %f \n", temp_min, temp_mean);
			dsp_set_leds(63);
			return;	
		}
	}else {
		printf("No matching word found, try again! Min-error: %f Mean-error: %f \n", temp_min, temp_mean);
		dsp_set_leds(63);
		//fel = fel +1;
		return;
	}	
	/*counter = counter + 1;
	if(counter == 100){
		printf("Testresultatet: Vänster: %d, Höger: %d, Fel: %d \n" ,vanster, hoger, fel );	
	}*/
	return;	
}





