#include <stdio.h>
int main(){
    int num1;
    int num2;
    int temp;

    printf("Input a number: ");
    scanf("%d", &num1);
    printf("Input another number: ");
    scanf("%d", &num2);

    temp = num2;
    num2 = num1;
    num1 = temp;

    printf("%d  --  %d\n", num1, num2);

    return 0;
}