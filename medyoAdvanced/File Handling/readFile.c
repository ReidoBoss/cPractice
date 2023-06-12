#include <stdio.h>

int main(){

    FILE *oten = fopen("testing.txt","r");
    char buffer[255];

    // fgets(buffer, 255, oten); reads one line
    // printf("%s",buffer);
    if(oten == NULL){
        printf("walang putanginang files dito boss");
    }
    else{
        
        while(fgets(buffer, 255, oten)!=NULL){
        printf("%s",buffer);
    }

    }



    fclose(oten);

    return 0;
}