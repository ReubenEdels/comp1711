#include <stdio.h>
int main(){
    float farenheit;
    float celsius;

    printf("Input the tempurature in farenheit: ");
    scanf("%f", &farenheit);

    celsius = ((farenheit - 32) * 5) / 9;
    printf("The tempurature in celsius is %f\n", celsius);

    return 0;
}