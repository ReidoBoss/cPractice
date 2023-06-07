#include <stdio.h>
int main(){

    char y = 'y';
    char x = 'x';
    char temp;

    temp = y;
    y = x;
    x = temp;

    printf("Y: %c\nX: %c",y,x);

    return 0;
}