#ifndef MATCHING
#define MATCHING

#include "load_db.h"

static float real_abs(float value);
void matching(db_t const pm* current_database, version_t* input);
void validation(result_t* result);
#endif
