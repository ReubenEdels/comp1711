#include <stdio.h>
int main(){
    int height;
    int width;
    int area;

    printf("Enter rectangle height: ");
    scanf("%d", &height);
    printf("Enter rectangle width: ");
    scanf("%d", &width);
    
    area = height * width;
    printf("Area is equal to %d\n", area);

    return 0;
}