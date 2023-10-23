#include <stdio.h>
int main(){
    int grade = 60;

    if (grade >= 70){
        printf("Distinction\n");
    }   
    else if (grade >= 50){
        printf("Pass\n");
    }
    else{
        printf("Fail\n");
    }
}