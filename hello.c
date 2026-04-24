#include <stdio.h>
int main(void){
    char name[30];
    char color[15];
    printf("What is your name?: %s");
    scanf("%s", &name);
    printf("Hello %s! \n", name);
    printf("What is your fav color?: %s ");
    scanf("%s", &color);
    printf("Your fav color is: %s \n", color);
    }
