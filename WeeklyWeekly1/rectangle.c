#include <stdio.h>
int main(void){

    int width;
    int length;
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Area %d \n", width*length);
    printf("Perimeter %d\n", 2*(width+length));
}
