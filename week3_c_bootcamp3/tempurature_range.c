#include <stdio.h>
int main(){
    int temp = 35;

    if (temp > -10){
        if (temp < 40){
            printf("Tempurature in range\n");
        }
        else{
            printf("Tempurature not in range\n");
        }
    }
    else{
        printf("Tempurature not in range\n");
    }   
}