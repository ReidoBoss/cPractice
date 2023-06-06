#include <stdio.h>

int main(){

    double scan;
    double oten;

    printf("Enter the number you want to be squared\n");
    scanf("%lf",&scan);
    oten = sqrt(scan);
    printf("Result: %0.2lf",oten);

}

double sqrt (double sqrt){

    sqrt = sqrt * sqrt;

    return sqrt;
}

