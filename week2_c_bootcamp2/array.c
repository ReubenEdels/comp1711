#include <stdio.h>
int main(){
    int array[4] = {4,8,12,16}, num1=0;
    int num2=2147483647;
    while (num1<4){
        printf("%d\n", array[num1]);
        num1++;
    }
    printf("%p\n %p\n",array,(array+1));
    printf("%d\n", num2);
    return 0;
}