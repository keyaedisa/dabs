#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

static int usage(int e, char* progName);
void optparse(int argc, char* argv[]);

//#define abuUO (~(~0 >> 1))  // Stands for abu Unique Option
#define abuCF  1                //abu custom flag no profile provided
#define abuCFPP (1 << 1)        //abu custom flag profile provided
#define abuVF   (1 << 2)        // abu Vanilla flag
#define abuVRF  (1 << 3)        // abu vanilla releng flag
#define abuVBF  (1 << 4)        // abu vanilla baseline flag
#define abuXF   (1 << 5)        // abu xero flag, no DE specified
#define abuXKF  (1 << 6)        // abu xero kde flag
#define abuXGF  (1 << 7)        // abu xero gnome flag

typedef uint8_t abuRunOptions_t, *abuRunOptions_p;
extern abuRunOptions_t hostFlags_t;
extern abuRunOptions_p hostFlags_p;