#include <stdio.h>
int main(){
    int input = 0;

    while (input != -1){
        printf("Input a number: ");
        scanf("%d", &input);
        if (input >= 0){
            if (input <= 100){
                printf("Input in range of 0-100\n");
            }
        }
    }
    printf("Iteration terminated\n");
}