#include <stdio.h>

void c_to_f(void);
void f_to_c(void);

int main(void){
    int user_response;
    printf("Temperature Converter\n");
    printf("Select an option: \n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d",&user_response);

    if (user_response == 1){
        c_to_f();

    }
    else if(user_response == 2){
        f_to_c();
    }
    else {
        printf("Invalid option\n");
    }
}


//2. definition
void c_to_f(void){

int celsius;
float fahrenheit = (celsius*1.8)+32;

 printf("Enter Celsius: ");
    scanf("%d", &celsius);
    printf("%d°C = %2.f°F \n", celsius, (celsius*1.8)+32);
}

void f_to_c(void){

    int fahrenheit;
    float c = (fahrenheit-32)/1.8;

    printf("What is the temperature in Fahrenheit? ");
    scanf("%d",&fahrenheit);
    printf("%d°F = %2.f°C \n",fahrenheit, (fahrenheit-32)/1.8);
}
