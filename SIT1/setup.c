#include "setup.h"
#include <stdio.h>
#include <stdlib.h>
#include "framework.h" 
#include "constants.h"

database_t* setup(void)
{
	
	//maybe need to turn off physical interrupts here.

	dsp_set_leds(SETUP_LEDS);

	database_t* temp = malloc(sizeof(database_t)); // no malloc!
	if(temp == NULL){
		fprintf(stderr, "out of memory at %d, in %s\n", (__LINE__ - 2), __FILE__);
		exit(1);
	}

	double a[N_REFLEC] = {1,2,3,4,5,6,7,8,9};	//TODO: fill with schur coeffs from matlab 
	
	temp->data = a;
	temp->next = NULL;

	database_t* head = temp;
	database_t* last = head;

	temp = NULL;
	
	//From here to --->
	temp = malloc(sizeof(database_t));
	if(temp == NULL){
		fprintf(stderr, "out of memory at %d, in %s\n", (__LINE__ - 2), __FILE__);
		exit(1);
	}

	double b[N_REFLEC] = {9,8,7,6,5,4,3,2,1}; //TODO: fill with schur coeffs from matlab
	temp->data = b;
	temp->next = NULL;

	last->next = temp;
	last = temp;

	// ---> here adds one new database to the list of spoken words which we 
	//  wants to match against.  

	dsp_set_leds(0);
	dsp_set_leds(SETUP_LEDS);
	dsp_set_leds(0);

	return head;

}


//tear down ?
