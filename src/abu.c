//#include "libabu.h"
#include <stdint.h>

// think about potentially using a struct to neatly store the variables abu needs
// create a string array called options each element contains a string that is the name
// of the option, and the length of the array is how many options exist
//#define unique_opt
//#define host_opt_custom (1 << 1)

//extern uint32_t abuFlags;


//typedef struct {
//    int custom, help, vanilla, xero;
//} abuFlags;

void abu(int argc, char *argv[]){
    optparse(argc,argv);
}

//char *arg;
int main(int argc, char *argv[]){
    //bool cmlArgPassed; // keeps track of if the user called abu with or w/out args from the console 
    //fprintf(stdout,"%s %s\n","Program name is:",*argv);
    abu(argc,argv);
    //abu(cmlArgPassed, *argv){

    /*
    if(argc == 2){
        cmlArgPassed = false;
        abu(cmlArgPassed,argv[1]);
    }
    //abu(0);
    //status(); */
    return 0;
}


/*
int abu(int cmlArgPassed, char *cmlArg){
    if(cmlArgPassed == 1){
        optParser(argc, )
    }
}*/