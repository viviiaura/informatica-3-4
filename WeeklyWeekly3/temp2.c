#include <stdio.h>
int main(void){

    int celsius;
    float fahrenheit = (celsius*1.8)+32;

    printf("Enter Celsius: ");
    scanf("%d", &celsius);
    printf("%d°C = %2.f°F \n", celsius, (celsius*1.8)+32);


    if(celsius < 0) {
        printf("❄️ freezing temperature \n");
    }
        else if(celsius < 10) {
            printf("🥶 Very cold weather \n");
        }
        else if(celsius < 20) {
            printf("🧥 Chilly weather \n");
        }
        else if(celsius < 30) {
            printf("🌲 Normal weather \n");
        }
        else if(celsius < 40) {
            printf("☀️ Hot weather \n");
        }
        else if(celsius > 40) {
            printf("🔥 VERY Hot weather \n");
        }

}
