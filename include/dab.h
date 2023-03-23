#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <stdint.h>
#include <string.h>

#define OPTIONAL_ARGUMENT_IS_PRESENT \
    ((optarg == NULL && optind < argc && argv[optind][0] != '-') \
     ? (bool) (optarg = argv[optind++]) \
     : (optarg != NULL))

#define noOpts 0
#define isoBuilder  1                //dab custom flag no profile provided
#define userProfMan (isoBuilder << 1)        //dab custom flag profile provided
#define archisoProfMan   (isoBuilder << 2)        // archiso Profile Manager

//enum options{dabCF,dabCFPP,dabVF,dabVBF,dabVRF,dabXF,dabXGF,dabXKF};
typedef int dabRunOpts_t, *dabRunOpts_p;
extern int hostFlags;
extern int* hostFlags_p;
extern char* cProfile;

// Create an array list of pointers that point to


int optparse(int argc, char* argv[]);
//typedef struct {
//    dabRunOpts_t hostFlagsT;
//    char* customProfile;
//} dabRunProperties;

//extern dabRunProperties thisRun;


//int optStructPrep(dabRunProperties *st);
//int customHandler(dabRunProperties *st);


