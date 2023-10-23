#include <stdio.h>

float divide(float num1, float num2){
    return num1 / num2;
} 

float multiply(float num1, float num2){
    return num1 * num2;
} 

float add(float num1, float num2){
    return num1 + num2;
} 

float subtract(float num1, float num2){
    return num1 - num2;
} 

int main(){
    float num1, num2;
    char operand;
    printf("Input first number: ");
    scanf("%f", &num1);
    printf("Input second number: ");
    scanf("%f", &num2);
    printf("Input operand: ");
    scanf(" %c", &operand);

    switch (operand)
    {
        case '/':   printf("%f\n", divide(num1, num2));
                    break;

        case '*':   printf("%f\n", multiply(num1, num2));
                    break;

        case '+':   printf("%f\n", add(num1, num2));
                    break;

        case '-':   printf("%f\n", subtract(num1, num2));
                    break;

        default:    break;

    }
    
}