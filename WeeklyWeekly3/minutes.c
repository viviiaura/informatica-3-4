#include <stdio.h>
int main(void){
    int movrunt;

    printf ("How long is the movie in minutes? ");
    scanf("%d", &movrunt);

    int startHour;
    int startmin;

    printf("What is the starting time? ");
    scanf("%d:%d", &startHour, &startmin);

    int hrt = movrunt / 60;
    int mint = movrunt % 60;
    int endt = startHour + hrt;
    int endtm = startmin + mint;

    if(endtm >= 60){
        endt = endt + (endtm / 60); //Update value of endt variable
        endtm = endtm % 60;
    }

    printf("The movie is %d hr long and %d min\n", hrt, mint);
    printf("The end time is %d:%02d \n", endt, endtm);

}
