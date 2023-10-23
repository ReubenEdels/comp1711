#include <stdio.h>
int main(){
    int array [6] = {5,6,8,3,8,2}, num1=1, num2=0;

    while(num1<6){

        while(num2<6){

            if (num1 > num2){
                if (array[num1] == array[num2]){
                    printf("%d\n", array[num1]);
                }
            }

            num2++;
        }

        num1++;
        num2 = 0;
    }  
}