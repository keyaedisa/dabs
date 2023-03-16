//#include "libdab.h"
#include <stdio.h>
#include <stdint.h>

#include "dab.h"

//dabRunOpts_t optArr[];
options option;

int executor(dabRunOpts_p flags){
    dabRunOpts_t i, optChecker = 0;
    int launchOpt;
    for(i = dabCF;  (1 << i) <= dabXGF;  i++)
        (*flags & (1 << i)) ? launchOpt = i && break : continue;
    
}


void dab(int argc, char *argv[]){
    optparse(argc,argv);
    //executor(hostFlags_p,);
    //printf("%d\n",*hostFlags_p);
    printf("%d\n", option);
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