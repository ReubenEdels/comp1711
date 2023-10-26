#include <stdio.h>
#include "utils.h"

int main(){
    int n, x = 1, square;

    printf("Give a number: ");
    scanf("%d", &n);

    FILE *file = open_file("squares.dat", "w");

    while (x <= n){
        square = x*x;
        fprintf(file, "%d\n", square);
        x++;
    }

    fclose(file);
    return 0;
}