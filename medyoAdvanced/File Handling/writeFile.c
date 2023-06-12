#include <stdio.h>

int main (){

    FILE *oten = fopen("testing.html","a");

    fprintf(oten,"Hemlo!");

    fclose(oten);

    return 0;
}