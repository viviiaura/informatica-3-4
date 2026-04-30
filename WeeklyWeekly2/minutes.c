#include <stdio.h>
int main(void){
    int movrunt;


    printf ("How long is the movie in minutes? \n");
    scanf("%d", &movrunt);

    int startHour;
    int startmin;

    printf("What is the starting time? \n");
    scanf("%d %d", &startHour, &startmin);

    int hrt = movrunt / 60;
    int mint = movrunt % 60;
    int endt = startHour + startmin;
    int endtm = startmin + mint;

    printf("The movie is %d hr long and %d min\n", hrt, mint);
    printf("The end time is %d:%d \n", endt, endtm);

}
