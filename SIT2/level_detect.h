#ifndef LEVEL_DETECT
#define LEVEL_DETECT
#include "constants.h"
#include "buffer.h"
#include "hamming.h"
int level_detect(float* input);
void set_energy(float pl, float ps);
void update_energy(float* input);
float get_energy(void);
float calc_energy(float* input);

extern float P_L;
extern float P_S;

#endif

