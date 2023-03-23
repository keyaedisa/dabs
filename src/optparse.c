#include "dab.h"

int hostFlags = 0;
int* hostFlags_p = &hostFlags;
int const con = 0;
int* const conp = &con;


//dabRunProperties thisRun;
char* cProfile;
static int usage(int e, char* progName);


static struct option longopts[] = {
	{"custom",optional_argument,conp, con | isoBuilder},
	{"help",no_argument,conp, con | isoBuilder},
	{"vanilla",optional_argument,conp,con | (dabRunOpts_t)isoBuilder},
	{"xero",optional_argument,conp,con | (dabRunOpts_t)isoBuilder},
	{"archisoProfMan",optional_argument,conp,con | archisoProfMan},
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
	"\tNote: -c,-v,-x can take the following optional arguments -> [-c [archiso-profile], -v [r / b], -x [k / g]]\n\n"
	"Created by keyaedisa.\n"
	"archiso wrapper utility designed to help you build your own custom ISO's"
	"or an ISO using one of the built in presets.\n\n"
	"Options:\n"
	"\t-c, --custom\t[archisoProfile]\tBuild an ISO using a custom profile\n"
	"\t-h, --help\t\t\t\tShow this help\n"
	"\t-v, --vanilla\t[r/b]\t\t\tBuild a vanilla arch ISO using the releng or baseline profiles\n"
	"\t-x, --xero\t[k/g]\t\t\tBuild a XeroLinux ISO using the KDE or Gnome profiles\n"
	,progName);


	exit(e);
}

//int customHandler(dabRunProperties *st){

//}



int optparse(int argc, char* argv[]){
	int opt;
	//int index;
	while ((opt = getopt_long(argc,argv,
//#ifdef DEV_BUILD
	//"xxx"
//#else
	"c::hv::x::a::",
//#endif
	longopts, NULL)) != -1)
	{
		switch (opt){
		case 'c':
			if(!OPTIONAL_ARGUMENT_IS_PRESENT)
				*hostFlags_p |= isoBuilder;
			else {
				//st->customProfile = optarg;
				cProfile = optarg;
				*hostFlags_p |= isoBuilder;
			}
			break;
		case 'h':
			usage(0, argv[0]);
			break;
		case 'v':
		if(OPTIONAL_ARGUMENT_IS_PRESENT){
			if(*optarg == 'b')
				*hostFlags_p |= isoBuilder;
			else if (*optarg == 'r')
				*hostFlags_p |= isoBuilder;
		} else
			*hostFlags_p |= isoBuilder; 
		break;
		case 'x':
		if(OPTIONAL_ARGUMENT_IS_PRESENT){
			if(*optarg == 'k')
				*hostFlags_p |= isoBuilder;
			else if (*optarg == 'g')
				*hostFlags_p |= isoBuilder;			
		} else 
				*hostFlags_p |= isoBuilder;
		break;
		case 'a':
			*hostFlags_p |= archisoProfMan;
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