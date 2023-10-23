#include <stdio.h>

int str_len(char string [99]){
    int n = 0, found = 0;
    while (found == 0){
        char character = string[n];
        if (character == '\0'){
            found = 1;
        }
        else{
            n++;
        }
    }
    return n;
}

int main(){
    char string [99] = "Hello!";
    printf("%d\n", str_len(string));
    return 0;
}