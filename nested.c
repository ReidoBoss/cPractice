#include <stdio.h>
#include <string.h>

int main (){

    int row;
    int col;
    char symbol[5];

    printf("Enter number of rows: \n");
    scanf("%d",&row);
    
    printf("Enter number of columns: \n");
    scanf("%d",&col);
    scanf("%c");
    

    do{
    printf("Enter symbol you wanna use: ");
    scanf("%s",&symbol);     
    }while(strlen(symbol)!=1);

  

    for ( int i = 1; i <= row; i ++){

        for(int j = 1; j <= col ; j ++){
            printf("%s ",symbol);
        }
        printf(" \n");
    }






return 0;

}