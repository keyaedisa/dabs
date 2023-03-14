#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

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
	{0,0,0,0}
};

static int usage(int e, char* progName){
	fprintf(stderr,
//#ifdef DEV_BUILD
//	"Usage: %s [xxx]\n"
//#else
	"Usage: %s [-chvx]\n"
//#endif
	"Note: -c,-v,-x can take an optional argument. [-c profile, -v r OR b, -x k OR g]\n\n"
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
			printf("kumc");
			//if(OPTIONAL_ARGUMENT_IS_PRESENT){
			//	arg = optarg;
			//}
			//host_flags |= (unique_opt | abu_cFlag);
			break;
		case 'h':
			usage(0, argv[0]);
			break;
		case 'v':
		printf("kumv");
			//host_flags |= (unique_opt | abu_vFlag);
			break;
		case 'x':
		printf("kumx");
			//host_flags |= (unique_opt | abu_xFlag);
			break;
		default:
			usage(1, argv[0]);
			exit(1);
		}
	}
}