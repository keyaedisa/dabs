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

#define dabCF  1                //dab custom flag no profile provided
#define dabCFPP (1 << 1)        //dab custom flag profile provided
#define dabVF   (1 << 2)        // dab Vanilla flag
#define dabVRF  (1 << 3)        // dab vanilla releng flag
#define dabVBF  (1 << 4)        // dab vanilla baseline flag
#define dabXF   (1 << 5)        // dab xero flag, no DE specified
#define dabXKF  (1 << 6)        // dab xero kde flag
#define dabXGF  (1 << 7)        // dab xero gnome flag

//enum options{dabCF,dabCFPP,dabVF,dabVBF,dabVRF,dabXF,dabXGF,dabXKF};
typedef uint8_t dabRunOpts_t, *dabRunOpts_p;
extern dabRunOpts_t hostFlags;
extern dabRunOpts_p hostFlags_p;
extern char* cProfile;

int optparse(int argc, char* argv[]);
//typedef struct {
//    dabRunOpts_t hostFlagsT;
//    char* customProfile;
//} dabRunProperties;

//extern dabRunProperties thisRun;


//int optStructPrep(dabRunProperties *st);
//int customHandler(dabRunProperties *st);


