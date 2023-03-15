#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <stdint.h>
#include <string.h>

typedef uint8_t dabRunOpts_t, *dabRunOpts_p;
extern dabRunOpts_t hostFlags_t;
extern dabRunOpts_p hostFlags_p;

extern dabRunProperties thisRun;

typedef struct {
    dabRunOpts_t hostFlagsT;
    char* customProfile;
} dabRunProperties;

#define dabCF  1                //dab custom flag no profile provided
#define dabCFPP (1 << 1)        //dab custom flag profile provided
#define dabVF   (1 << 2)        // dab Vanilla flag
#define dabVRF  (1 << 3)        // dab vanilla releng flag
#define dabVBF  (1 << 4)        // dab vanilla baseline flag
#define dabXF   (1 << 5)        // dab xero flag, no DE specified
#define dabXKF  (1 << 6)        // dab xero kde flag
#define dabXGF  (1 << 7)        // dab xero gnome flag

