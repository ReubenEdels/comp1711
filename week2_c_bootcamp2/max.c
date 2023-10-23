#include <stdio.h>

//This assumes that all inputted intergers are positive.
int main(){
    int array [5] = {5,3,9,8,8}, num1=0, max=0;

    while(num1<5){
        if (array[num1]>max){
            max = array[num1];
        }
        num1++;
    }  
    printf("%d\n", max);
}