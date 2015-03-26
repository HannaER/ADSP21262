#ifndef CONSTANTS
#define CONSTANTS

#define Fs              8000  //Sample rate in Hz

#define BLOCK_LENGTH   	160 //The number of samples in each block

#define REC_TIME        1.5 //Record for this many seconds

#define OVERLAP         80 //How many samples will be copied form previous block into present block

//number of block of one recording.
#define N_BLOCKS        150 //( (Fs * REC_TIME)*((BLOCK_LENGTH - OVERLAP) ) )

#define N_REFLEC        9 //number of reflection coefficients

#define BUFFER			3 //length of buffer
 
#define BUFFER_SIZE		((BUFFER)*(BLOCK_LENGTH)) //Buffer length in samples.

#define SUBSET_LENGTH	12 // number of subsets

#define	N_VERSIONS 	12 // number of versions of a certain word

#define	N_WORDS		2 // number of different words we match against

#define THRESHOLD_MIN	15.0

#define THRESHOLD_MEAN	70

typedef struct {
	float energy; // summan av absolutbeloppen av amplituden
	float reflect[N_REFLEC]; // reflektionskoefficienterna
} block_t;

typedef struct 
{
	block_t subset[SUBSET_LENGTH];
} version_t; // a version of a certain word


typedef struct
{
	char* name;
	version_t const pm* versions[N_VERSIONS];
} word_t; // a list of versions for a certain word


typedef struct{
	//float threshold;
	word_t const pm* words[N_WORDS];
} db_t; 


typedef struct 
{
	char* name; //name of the word version 
	float min_err; //smallest error for a version of a word
	float mean_err;
} result_t; // matching result for a db for a type of word

extern db_t pm db; // global variabel för databasen = db

#endif
