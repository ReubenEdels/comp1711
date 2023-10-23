#include <stdio.h>
int main(){
    int array1 [3] = {1,2,3}, array2 [3] = {4,5,6}, array3 [6] = {0,0,0,0,0,0}, num1=0, len=0;

    len = sizeof(array1) / sizeof(array1[0]);

    while(num1<6){
        if (num1>=len){
            array3[num1] = array2[num1-len];
        }
        else{
            array3[num1] = array1[num1];
        }
        num1++;
    }  
    num1=0;
    while(num1<6){
        printf("%d\n", array3[num1]);
        num1++;
    }
}