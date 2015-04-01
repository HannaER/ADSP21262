#ifndef HAMMING
#define HAMMING
#include "constants.h"

// autogenereras fr�n Matlab:toFileHAMMINGH
extern float const pm hamming_window[BLOCK_LENGTH];
void hamming(float* input, float* output);

#endif

