#include <stdio.h>

void hello(char[],int);// prototype, ang gamit ani kay para mo error ug sakto, dili mo run nga naay mga erros basta ingon-ana. fuck you!

int main(){

    char name [] = "I love Oten";
    int test = 12;
    hello (name,test);
    return 0;
}

void hello(char name[], int age){

    printf("HEllo madafaka, your name is: %s \n",name);
    printf("HEllo madafaka, your age is: %d \n",age);


}