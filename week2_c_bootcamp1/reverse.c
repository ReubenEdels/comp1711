#include <stdio.h>
int main(){
    char original[6];

    printf("Enter the string to be reversed: ");
    scanf("%s", original);

    printf("%c%c%c%c%c%c\n", original[5], original[4], original[3], original[2], original[1], original[0]);
    
    return 0;
}