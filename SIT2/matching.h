#ifndef MATCHING
#define MATCHING
#include "constants.h"
#include "framework.h"
#include <limits.h>
#include <float.h>
#include <string.h>
#include <stdio.h>


static float real_abs(float value);
void matching(db_t const pm* current_database, version_t* input);
void validation(result_t* result);
#endif
