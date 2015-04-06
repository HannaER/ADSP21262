#include "rm_noise.h"
#define SAMPLES	OVERLAP//901 // length of x
#define SECTIONS 3 	//  highpass1, highpass2, pre_emph
#define GAMMA 	0.5
#define DELTA1	0.91
#define DELTA2	0.5


const struct{
	float a0;
	float a1;
	float a2;
}A_coeffs[SECTIONS] = {{1, -DELTA1, 0},{1, DELTA2, 0}, {1, 0, 0}};
	
const struct{
	float b0;
	float b1;
	float b2;
}B_coeffs[SECTIONS]= {{1, -1, 0},{1, -1, 0}, {1, -GAMMA, 0}};
	
float const pm coeffs[4*SECTIONS] = {0, DELTA1, 0, -1,0, DELTA2, 0, -1, 0,0,0,-GAMMA};

void rm_noise(float* x, float* output)
{
	float scale;
	float a0, a1, a2;
	float b0, b1, b2;
	float state[2*SECTIONS + 1];
	int i; 	
	scale = 1.0;	
	/*for (i = 0; i < SECTIONS; i++){
		a0 = A_coeffs[i].a0;
		a1 = A_coeffs[i].a1;	
		a2 = A_coeffs[i].a2;
		a1 = -a1;
		a2 = -a2;
		coeffs[(i*4) + 0] = (a2/a0);
		coeffs[(i*4) + 1] = (a1/a0);
		b0 = B_coeffs[i].b0;
		b1 = B_coeffs[i].b1;
		b2 = B_coeffs[i].b2;
		coeffs[(i*4) + 2] = (b2/b0);
		coeffs[(i*4) + 3] = (b1/b0);

		scale = scale*(b0/a0);
	}*/		

	for(i = 0;i < 2*SECTIONS; i++){
		state[i] = 0;			
	}	
	iir(x, output, coeffs, state, SAMPLES, SECTIONS);	


/*
	static float const pm c[] = {
		// -A2, -A1, B2, B1, B0
		0, 0.92, 0, -1, 1,
		0, 0, 0, -0.97, 1
	};
	
	biquad(x, output, c, state, 901, 2);*/
}












