#include <stdio.h>

int main(){

    char input;
    float a,c;
    printf("Welcome to my Temperature Converter Mini!\nPress (1) for Fahrenheit (F) to Celsius (C) Conversion.\nPress (2) for Celsius (C) Conversion to Fahrenheit (F).\nEnter: ");
    scanf("%s",&input);

    input = toupper(input);
    if(input == '1'|| input == 'F'){
        printf("Fahrenheit (F) to Celsius (C) Conversion.\nEnter (F): ");
        scanf("%f",&a);

        c= ((float)a-32)/1.8;

        printf("The Converted value of %0.2f(F) is: %0.2f (C)",a,c);
        

    }
    else if(input == '2'|| input == 'C'){
        printf("Celsius (C) to Fahrenheit (F) Conversion.\nEnter (F): ");
        scanf("%f",&a);

        c= (a * 1.8) +32;

        printf("The Converted value of %0.2f(C) is: %0.2f(F)",a,c);


    }
    else {
        printf("please enter valid argument");
    }
 

    return 0;

}