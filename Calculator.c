#include <stdio.h>

/*
Author: Stephen Sagarino Jr.
Purpose: Calculator in C Program, fuck you go to you ./.
*/

int main(){

    //remember to always assign the variables first especially if you are using user input!

    int op;// we will use int because we are going to assign the user input as (1) for '+',(2) for '-',(3) for '*', and (4) for '/'
            // you can use anything, such as directly typing + or -. but for simplicity, let's use numbers as it is hard to type those directly.
    
    int a;// 1st integer
    int b;// 2nd integer
    int c;// result
    float d;// float result


    // Prompts the user on what operators they are going to use
    printf("Welcome to my MINI CALCULATOR!!\n Press (1) for '+' \n Press (2) for '-'\n Press (3) for '*'\n Press (4) for '/'\n Enter:");
    // remember to always use & in scanf, because if you won't, the scan will stop.
    scanf("%d",&op);

    // you can always use switch case. but for now i will use if statement.
    if (op==1){
        printf("We are now using addition(+). \nPlease Enter 1st digit: ");
        scanf("%d",&a);
        printf("Please Enter 2nd digit: ");
        scanf("%d",&b);
        c= a + b;
        printf("Result is: %d", c);
    }
    else if(op ==2){
        printf("We are now using subtraction(-). \nPlease Enter 1st digit: ");
        scanf("%d",&a);
        printf("Please Enter 2nd digit: ");
        scanf("%d",&b);
        c = a - b;
        printf("Result is: %d", c);  
    }
    else if(op ==3){
        printf("We are now using multiplication(*). \nPlease Enter 1st digit: ");
        scanf("%d",&a);
        printf("Please Enter 2nd digit: ");
        scanf("%d",&b);
        c = a * b;
        printf("Result is: %d", c);  
    }
    else if(op ==4){
        printf("We are now using division(-). \nPlease Enter 1st digit: ");
        scanf("%d",&a);
        printf("Please Enter 2nd digit: ");
        scanf("%d",&b);
        d = a * (float)b;
        printf("Result is: %0.2f", d);  
    }        
    else{
        printf("\n please enter a valid argument brother!");
    }


    return 0;

}