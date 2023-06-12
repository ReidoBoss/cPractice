#include <stdio.h>

int main(){

    int num = 0;
    int sum = 0;

 

    do{

            printf("enter num above 0 brother you mothefcuer\n");
            scanf("%d",&num);
            sum += num;

    }while (num > 0);

    printf("%d",sum);

    return 0;
}