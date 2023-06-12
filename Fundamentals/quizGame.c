#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = {
                             "Best dog in BSCS?",
                             "Name of stephen's big dog?"};
    char options [][100]  = {"A.Ringo B. Kenneth C. Toby Dancer", 
                             "A.Ringo B. Toby the Dog C. Kenneth"};
    char answer [] = {'B','B'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess; 
    int score;
    
    printf("*******************************************\n");
    printf("WELCOME THE STEPHEN's PLACE QUIZ BITCHES!\n");
    printf("*******************************************\n\n");

    for (int i = 0 ; i < size; i ++){
        printf("--------------------------------------\n");
        printf("%d.)%s\n",i+1,questions[i]);
        printf("%s\n",options[i]);
        printf("Answer: ");
        scanf("%c", &guess);
        scanf("%c");    
        printf("---------------------------------------\n\n");


        if (toupper(guess)== answer[i]){
            score ++;
            printf("That's correct!\n");
        }
        else{
            printf("That's wrong!\n");
        }

   
    }

    printf("Score: %d",score);
    
    return 0;
}