#include <stdio.h>
int isPrime(int num){
    int n = 2, prime = 1;
    while (n < (num/2)){
        if (num % 2 == 0){
            prime = 0;
            n = num;
        }
        else{
            n++;
        }
    return prime;
    }
}

int main(){
    printf("%d\n", isPrime(12));
    return 0;
}