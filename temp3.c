#include <stdio.h>

void c_to_f(void);

int main(void){
    int user_ response;
    printf("Temperature Converter\n");
    printf("Select an option: \n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d",&user_response);

    if (user_response == 1){
        c_to_f();

    } elseif(user_response ==2){
        f_to_c();
    }else {
        printf("Invalid option\n");
    }
}
//3. Call
c_to_f();
f_to_c();
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
    printf("What is the temperature in Fahrenheit? ");
    scanf("%d",&f);
    int c = (f - 32) / 1.8;
    int fahrenheit;
    printf("%.2f°F = %d°C \n",fahrenheit, (fahrenheit - 32) / 1.8;);
}
