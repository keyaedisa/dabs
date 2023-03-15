#include "abu.h"

abuRunOptions_t hostFlags_t = 0;
abuRunOptions_p hostFlags_p = &hostFlags_t;

#define OPTIONAL_ARGUMENT_IS_PRESENT \
    ((optarg == NULL && optind < argc && argv[optind][0] != '-') \
     ? (bool) (optarg = argv[optind++]) \
     : (optarg != NULL))



static struct option longopts[] = {
	{"custom",optional_argument,NULL,'c'},
	{"help",no_argument,NULL,'h'},
	{"vanilla",optional_argument,NULL,'v'},
	{"xero",optional_argument,NULL,'x'},
//#ifdef DEV_BUILD
// {,,,},
//#endif
	{NULL,0,NULL,0}
};

static int usage(int e, char* progName){
	fprintf(stderr,
//#ifdef DEV_BUILD
//	"Usage: %s [xxx]\n"
//#else
	"Usage: %s [-chvx]"
//#endif
	"\tNote: -c,-v,-x can take an optional argument. [-c [archiso-profile], -v [r / b], -x [k / g]]\n\n"
	"Created by keyaedisa.\n"
	"archiso wrapper utility\n\n"
	"\t-c, --custom\t\t\tBuild an ISO using a custom profile\n"
	"\t-h, --help\t\t\tShow this help\n"
	"\t-v, --vanilla\t\t\tBuild a vanilla arch ISO using the releng or baseline profiles\n"
	"\t-x, --xero\t\t\tBuild a XeroLinux ISO using the KDE or Gnome profiles\n"
	,progName);

	exit(e);
}



void optparse(int argc, char* argv[]){
	int opt;
	int index;
	char* arg;
	while ((opt = getopt_long(argc,argv,
//#ifdef DEV_BUILD
	//"xxx"
//#else
	"c::hv::x::",
//#endif
	longopts, NULL)) != -1)
	{
		switch (opt){
		case 'c':
			printf("kumc\n");
			if(OPTIONAL_ARGUMENT_IS_PRESENT){
				arg = optarg;
				printf("yxwaugh\n");
			}
			//host_flags |= (unique_opt | abu_cFlag);
			break;
		case 'h':
			usage(0, argv[0]);
			break;
		case 'v':
		printf("kumv\n");
		if(OPTIONAL_ARGUMENT_IS_PRESENT){
			if(*optarg == 'b')
				*hostFlags_p |= abuVBF;
			else if (*optarg == 'r')
				*hostFlags_p |= abuVRF;
		} else {*hostFlags_p |= abuVF; };
		printf("%p hostFlags, %d abuVBF, %d abuVRF, %c optarg\n",hostFlags_p,abuVBF,abuVRF,*optarg);
			break;
		case 'x':
		if(OPTIONAL_ARGUMENT_IS_PRESENT){
				arg = optarg;
				printf("ben\n");
			}
		default:
			printf("kumz\n");
			usage(1, argv[0]);
		}
	}
	if(argc == 1){
		usage(1,argv[0]);
	};
}