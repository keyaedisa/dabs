#include "dab.h"

lDefs_t* lCreate(char* name, int len, char* contents){
    lDefs_t* header = NULL;
    
    header = (lDefs_t*)malloc(sizeof(lDefs_t));
    name->lName = name;
    //name->lDesc = desc; // Need to implement
    name->head = name;
    if(contents == NULL){
        node* head = NULL;

        head=(node*)malloc(sizeof(node));
    }
    else {
        int i = 0;
        while(i < len){
            node* i = NULL;
                
            i=(node*)malloc(sizeof(node));

            i++;
        }
    }

}