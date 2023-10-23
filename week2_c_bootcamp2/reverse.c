#include <stdio.h>
int main(){
    int array [5] = {1,2,3,4,5}, num1 = 0;

    while (num1<5){
        printf("%d\n", array[4-num1]);
        num1++;
    }
    
}