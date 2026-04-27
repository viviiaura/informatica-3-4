#include <stdio.h>
int main(void){

    int Celsius;
    float Fahrenheit = (Celsius+32)*1.8;

    printf("Enter Celsius: ");
    scanf("%d", &Celsius);
    printf("Celsius: %d ° \n", Celsius);
    printf("Fahrenheit: %.2f ° \n", (Celsius*1.8)+32);
}
