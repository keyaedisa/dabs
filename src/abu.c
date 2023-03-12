#include "libabu.h"

// think about potentially using a struct to neatly store the variables abu needs
// create a string array called options each element contains a string that is the name
// of the option, and the length of the array is how many options exist

int main(int argc, char *argv[]){
    //bool cmlArgPassed; // keeps track of if the user called abu with or w/out args from the console
       
    //fprintf(stdout,"%s %s\n","Program name is:",*argv);
    if(argc == 1){
        fprintf(stdout,"%s","No extra command line arguments.\n");
        abuTUI();
    } else if(argc >= 2){
        //cmlArgPassed = true;
        optParser(argc, argv);
    } else{
        //cmlArgPassed = false;
        fprintf(stdout,"%s %d %s %s\n","hi",argc,argv[1],"bye ");
    }
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