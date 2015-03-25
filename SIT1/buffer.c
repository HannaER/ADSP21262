#include <stdio.h>
#include "buffer.h"
#include "constants.h"

static pm float buffer[BUFFER_SIZE]; //dont know if it works with pm here, just remove if not. 
static int length = 0;
static int index = 0;
static int oldest = 0;
static int next = 0;


void put(float* block)
{
	if (length < 3){
		length += 1;
	}else{
		oldest = (oldest  + BLOCK_LENGTH) % BUFFER_SIZE;
	}
	int i;
	for(i = 0; i < BLOCK_LENGTH; i++){
		buffer[next + i] = block[i];
	}
	next = (next + BLOCK_LENGTH) % BUFFER_SIZE ;


}

int poll(float* block){ 
	if(length == 0){
		return 0;
	}
	int i;
	for(i = 0; i < BLOCK_LENGTH; i++){
		block[i] = buffer[oldest + i];
	}
	oldest = (oldest + BLOCK_LENGTH) % BUFFER_SIZE;
	length -= 1;
	
	return length;
}
