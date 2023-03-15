//#include "libdab.h"
#include <stdio.h>
#include <stdint.h>

#include "dab.h"

// think about potentially using a struct to neatly store the variables dab needs
// create a string array called options each element contains a string that is the name
// of the option, and the length of the array is how many options exist
//#define unique_opt
//#define host_opt_custom (1 << 1)

//extern uint32_t dabFlags;


//typedef struct {
//    int custom, help, vanilla, xero;
//} dabFlags;


void dab(int argc, char *argv[]){
    //dabRunProperties thisRun;
    optparse(argc,argv);
    //free(thisRun.customProfile);
    //printf("%d\n",*hostFlags_p);
    //printf("%s\n",cProfile);
}

//char *arg;
int main(int argc, char *argv[]){
    //bool cmlArgPassed; // keeps track of if the user called dab with or w/out args from the console 
    //fprintf(stdout,"%s %s\n","Program name is:",*argv);
    dab(argc,argv);
    //dab(cmlArgPassed, *argv){

    /*
    if(argc == 2){
        cmlArgPassed = false;
        dab(cmlArgPassed,argv[1]);
    }
    //dab(0);
    //status(); */
    return 0;
}


/*
int dab(int cmlArgPassed, char *cmlArg){
    if(cmlArgPassed == 1){
        optParser(argc, )
    }
}*/