#include <stdio.h>

void add(void);
void sub(void);
void mult(void);
void div(void);

int main(void){
    int userr;
    printf("Calculator\n");
    printf("Select an option\n");
    printf("(1) Addition\n");
    printf("(2) Subtraction\n");
    printf("(3) Multiplication\n");
    printf("(4) Division\n");
    scanf("%d",&userr);

    if (userr == 1){
        add();
    }
    else if (userr == 2){
        sub();
    }
    else if (userr == 3){
        mult();
    }
    else if (userr == 4){
        div();
    }
    else {
        printf("Invalid option\n");
    }
}

void add(void){
    int num1;
    int num2;

    printf("What's your first number? ");
    scanf("%d",&num1);

    printf("What's your second number? ");
    scanf("%d",&num2);

    printf("%d + %d \n", num1, num2);
    printf("%d + %d = %d \n", num1, num2, num1 + num2);
}

void sub(void){
    int num1;
    int num2;
    
    printf("What's your first number? ");
    scanf("%d",&num1);

    printf("What's your second number? ");
    scanf("%d",&num2);

    printf("%d + %d \n", num1, num2);
    printf("%d + %d = %d \n", num1, num2, num1 + num2);
}

void mult(void){

}

void div(void){

}
