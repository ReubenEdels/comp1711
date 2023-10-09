#include <stdio.h>
int main(){
    int input;
    int remainder;

    printf("Input a number: ");
    scanf("%d", &input);

    remainder = input % 2;

    if (remainder == 0){
        printf("%d is even\n", input);
    } else{
        printf("%d is false\n", input);
    }

    return 0;
}