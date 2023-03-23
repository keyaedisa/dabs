//#include "libdab.h"
#include <stdio.h>
#include <stdint.h>

#include "dab.h"

//dabRunOpts_t optArr[];
//options option;
int executor(dabRunOpts_p hostFlags_p){
    int z = 0;
    printf("%d z\n",*hostFlags_p);
    for(z;*hostFlags_p > 0;*hostFlags_p >> z++){
        printf("%dhf\n",z);
        switch(*hostFlags_p){
            //case  0:
              //  printf("0\n");
              //  break;
            case isoBuilder:
                printf("iso\n");
                break;
            case userProfMan:
                printf("usr\n");
                break;
            case archisoProfMan:
                printf("arch\n");
                printf("%d zval\n",z);
                printf("%dapm\n",archisoProfMan);
                break;
            default:
                printf("faiilure\n");
                break;
        }
    }
    return 0;
}



void dab(int argc, char *argv[]){
    optparse(argc,argv);
    executor(hostFlags_p);
    //executor(hostFlags_p,);
    //printf("%d\n",*hostFlags_p);
    //printf("%d\n", option);
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