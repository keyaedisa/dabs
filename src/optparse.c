#include "optparse.h"

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
	"\tNote: -c,-v,-x can take an optional argument-> [-c [archiso-profile], -v [r / b], -x [k / g]]\n\n"
	"Created by keyaedisa->\n"
	"archiso wrapper utility\n\n"
	"\t-c, --custom\t\t\tBuild an ISO using a custom profile\n"
	"\t-h, --help\t\t\tShow this help\n"
	"\t-v, --vanilla\t\t\tBuild a vanilla arch ISO using the releng or baseline profiles\n"
	"\t-x, --xero\t\t\tBuild a XeroLinux ISO using the KDE or Gnome profiles\n"
	,progName);

	exit(e);
}

int customHandler

int optStructPrep(dabRunProperties *st){
    st->customProfile = "";
	st->hostFlagsT = 0;
	return 0;
}

int optparse(int argc, char* argv[], dabRunProperties *st){
	int opt;
	int index;
	optStructPrep(st);
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
			if(!OPTIONAL_ARGUMENT_IS_PRESENT)
				st->hostFlagsT |= dabCF;
			else {
				st->customProfile = optarg;
				st->hostFlagsT |= dabCFPP;
			}
				
			//host_flags |= (unique_opt | dab_cFlag);
			break;
		case 'h':
			usage(0, argv[0]);
			break;
		case 'v':
		printf("kumv\n");
		if(OPTIONAL_ARGUMENT_IS_PRESENT){
			if(*optarg == 'b')
				st->hostFlagsT |= dabVBF;
			else if (*optarg == 'r')
				st->hostFlagsT |= dabVRF;
		}
		else
			st->hostFlagsT |= dabVF; 
		break;
		case 'x':
		if(OPTIONAL_ARGUMENT_IS_PRESENT){
				if(*optarg == 'k')
					*hostFlags_p |= dabVBF;
				else if (*optarg == 'g')
					*hostFlags_p |= dabVRF;
			else 
				*hostFlags_p |= dabVF;
		} 
		break;
		default:
			printf("kumz\n");
			usage(1, argv[0]);
		}
	}
	if(argc == 1){
		usage(1,argv[0]);
	};
	return 0;
}