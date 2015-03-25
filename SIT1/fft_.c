#include <stdio.h>
#include <complex.h>
#include <filter.h>

#define fftsize 32

complex_float pm twiddle_table[fftsize/2];
void fft_(double** x)
{

	float sigdata[fftsize];
	complex_float r_output[fftsize];
	complex_float i_output[fftsize];
	complex_float i_temp[fftsize];
	complex_float c_temp[fftsize];
	float *r_temp = (float*) c_temp;

	int i;
	/*twidfft(twiddle_table, fftsize);
	rfft(sigdata, r_temp, r_output, twiddle_table, 1, fftsize);
	for(i = 1; i < (fftsize/2); i++){
		r_output[fftsize - i] = conf(r_output[i]);
	}*/
	
}
