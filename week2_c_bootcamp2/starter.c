#include <stdio.h>
int main(){
    int num1;
    int num2;


    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);
    
    int sum = num1 + num2;

    printf("The sum of the numbers is %d\n", sum);
    return 0;
}