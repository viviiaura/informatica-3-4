#include <stdio.h>

int main(void){

    //Chips ahoy
    float price1 = 65.75;
    int Quantity1 = 6;
    char code1 = 'a';

    //Oreos
    float price2 = 67.85;
    int Quantity2 = 8;
    char code2 = 'b';

    //Milk
    float price3 = 75.65;
    int Quantity3 = 4;
    char code3 = 'c';

    printf("Welcome to the cookies and milk vending machine\n");
    printf("..................................................\n");
    printf("\n");

    printf("Item Name: Chips Ahoy\n");
    printf("Price: %.2f \n", price1);
    printf("Quantity Available: %d \n", Quantity1);
    printf("Selection Code: %c \n", code1);
    printf("\n");

    printf("Item Name: Oreos\n");
    printf("Price: %.2f \n", price2);
    printf("Quantity Available: %d \n", Quantity2);
    printf("Selection Code: %c \n", code2);
    printf("\n");

    printf("Item Name: Milk\n");
    printf("Price: %.2f \n", price3);
    printf("Quantity Available: %d \n", Quantity3);
    printf("Selection Code: %c \n", code3);
    printf("\n");
}
