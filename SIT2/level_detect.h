#ifndef LEVEL_DETECT
#define LEVEL_DETECT
#include "constants.h"
#include "buffer.h"
#include "hamming.h"
#include <stdio.h>

int level_detect(float* input); 
void set_energy(float pl, float ps); // for initialisiation
void update_energy(float* input); // update short- and longterm energies of the latest sampled block
float get_energy(void); // returns the latest calculated energy
float calc_energy(float* input);

extern float P_L;
extern float P_S;

#endif


