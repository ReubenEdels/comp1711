#include <stdio.h>
int main(){
    int array [5] = {5,3,6,8,8}, num1=0, total=0;

    while(num1<5){
        total+=array[num1];
        num1++;
    }  
    printf("%d\n", total);
}