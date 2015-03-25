#ifndef  DATABASE
#define DATABASE 
#include <string.h>

// Database is used as a storage for spoken words. Each db object stores schur coeffs of one word. 




typedef struct{
	float R[N_REFLEC];
	char* name;
} db_t;

typedef struct {
	float error;
	float min_err;
	char* name;
}db_results;

#endif
