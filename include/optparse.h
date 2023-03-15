#include "dab.h"

#define OPTIONAL_ARGUMENT_IS_PRESENT \
    ((optarg == NULL && optind < argc && argv[optind][0] != '-') \
     ? (bool) (optarg = argv[optind++]) \
     : (optarg != NULL))

dabRunOpts_t hostFlags_t = 0;
dabRunOpts_p hostFlags_p = &hostFlags_t;

static int usage(int e, char* progName);
int optparse(int argc, char* argv[], dabRunProperties *st);
int optStructPrep(dabRunProperties *st);
int customHandler(dabRunProperties *st);

