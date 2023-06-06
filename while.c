#include <stdio.h>
#include <string.h>

int main(){

    char name[25];

    printf("What's your name bitch? ");
    fgets(name, 25 , stdin);
    name[strlen(name)-1]= '\0';

    while (strlen(name) == 0){
        printf("please press a fukcing button bro\n");

    printf("What's your name bitch? \n");
    fgets(name, 25 , stdin);
    name[strlen(name)-1]= '\0';

    }

    printf("Hello %s, fuck you!",name);
      
    return 0;


}
