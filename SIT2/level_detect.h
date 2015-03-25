#ifndef LEVEL_DETECT
#define LEVEL_DETECT

int level_detect(float* input);
void set_threshold(float th);
float calc_norm(float* input);
float get_energy(void);
float calc_energy(float* input);

#endif

