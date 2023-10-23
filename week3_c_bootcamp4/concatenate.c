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


const char * concatenate(char string1 [99], char string2[99]){
    int length1 = str_len(string1), length2 = str_len(string2), n = 0;
    while (n < length2){
        string1[length1+n] = string2[n];
        n++;
    }
    return string1;
}

int main(){
    char string1 [99] = "Hello", string2 [99] = " World";
    printf("%s\n", concatenate(string1, string2));
    return 0;
}