#include <stdio.h>
int main(){
    int num = 140;

    if (num % 20 == 0){
        printf("%d is divisible by 4 and 5\n", num);
    }   
    else{
        printf("%d isn't divisible by 4 and 5\n", num);
    }
}