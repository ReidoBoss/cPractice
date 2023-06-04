#include <stdio.h>

int main(){
    
    char name[25];
    int inch;
    printf("Enter name: \n");
    scanf("%s",&name);
    printf("Enter your oten size\n");
    scanf("%d",&inch);
    oten(name,inch);

    
    return 0;
}

void oten(char name[], int inch){

    printf("Hello %s\n",name);
    printf("Your oten size is %d inches",inch);

}