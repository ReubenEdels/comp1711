#include <stdio.h>
int main(){
    float pi = 3.14159;
    float area;
    int radius;


    printf("Input the radius of the circle: ");
    scanf("%d", &radius);

    area = pi * radius * radius;
    printf("The area of the circle is approximately %f\n", area);

    return 0;
}