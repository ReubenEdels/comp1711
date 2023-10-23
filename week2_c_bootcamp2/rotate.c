#include <stdio.h>
int main(){
    int array [5] = {5,3,6,8,8}, num1=1, temp=0;
    temp = array[0];
    while(num1<5){
        array[num1-1] = array[num1];
        num1++;
    }  
    array[4] = temp;
    num1=0;
    while(num1<5){
        printf("%d\n", array[num1]);
        num1++;
    }
}