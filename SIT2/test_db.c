#include "constants.h"
#include "test_db.h"
#include <stdio.h>

/*
float const pm k1111 = {1};

float const pm k1112 = {2};

float const pm k1113 = {3};

float const pm e111 = {0};


float const pm k1121 = {1};

float const pm k1122 = {2};

float const pm k1123 = {3};

float const pm e112 = {0};
//  . . . 10 reflections koeff. per block, energin sätts till 0

block_t pm subset111 = {{e111}, {k1111, k1112, k1113}};
// . . . 12 subsets

version_t pm version11 = {{subset111}};
// . . . sju versioner
*/

version_t const pm version11 = {
	// version 1
		666, 1, 2, 3, // block 1
		667, 4, 5, 6, // block 2
};

#if 0
version_t pm version11 = { // version
							{
								{ //subset1
									{
										// energi
										0
										,
										{ // reflektionscoeff
										1, 2, 3
										}
									}
								},
								{ //subset2
									{
										 // energi
										0
										,
										{ // reflektionscoeff
										4, 5, 6 
										}
									}
								}
							}
						};
#endif							
word_t const pm word1 = {"testword", {&version11}};
// . . . två ord


db_t const pm db = {0,{&word1}};
// en databas, 0:an är en threshold i nuläget.
					

void test_db(void){
	 // peka till output
	return;	
}
