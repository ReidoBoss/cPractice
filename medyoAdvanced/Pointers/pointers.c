#include <stdio.h>

int main(){

    int age = 21;
    int *pAge = &age;

    printf("Address of age: %p\n",&age);
    printf("Value of pAge: %p\n",pAge);

    printf("Value of age: %d\n",age);
    printf("Value at stored address: %d",*pAge);

    return 0;
}