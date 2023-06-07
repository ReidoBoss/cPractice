#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int ran = (rand()%6)+1;

    printf("%d",ran);
    return 0;

}