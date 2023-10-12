#include <stdio.h>
int main(){
    int num1=1, num2=1;
    int multiple;
    
    while (num1<13){
        printf("%d: ", num1);
        while (num2<13){
            multiple = num1 * num2;
            printf("%d ", multiple);
            num2++;
        }
        printf("\n");
        num2 = 1;
        num1++;
    }
    return 0;
}