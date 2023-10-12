#include <stdio.h>

int main() {
    int a = 1;
    int s = 0;

    while (a < 10)
    {
        s+=a;
        printf ("%d   %d\n", a, s);
        a+=2;
    }
    printf ("I've finished the loop and a is equal to %d\n", a);

    return (0);
}