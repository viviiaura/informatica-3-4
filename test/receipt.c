#include <stdio.h>
int main(void){

    char item[30];
    float price;
    int Quantity;

    printf("What's the name of your purchased item?: \n");
    scanf("%s", &item);
    printf("What's the price of the item?: \n");
    scanf("%.2f", &price);
    printf("How much of that item did you buy?: \n");
    scanf("%d", &Quantity);
    printf("\n");
    float total = price*Quantity;
    printf("Welcome to Target!\n");
    printf("Item: %s \n", item);
    printf("Quantity: %d \n", Quantity);
    printf("Price: %.2f \n", price);
    printf("Total: %.2f \n", (price*Quantity));
    printf("Thank You!\n");

}
