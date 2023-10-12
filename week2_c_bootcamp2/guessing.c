#include <stdio.h>
#include <stdbool.h>
int main(){
    int randomnumber = 87, guess;
    bool correct= false;

    while (correct == false){
        printf("guess a number: ");
        scanf("%d", &guess);
        if (guess==randomnumber){
            printf("Congrats!\n");
            correct = true;
        }
        else if (guess > randomnumber){
            printf("Your guess was too high!\n");
        }
        else{
            printf("Your guess was too low!\n");
        }
    }
}
