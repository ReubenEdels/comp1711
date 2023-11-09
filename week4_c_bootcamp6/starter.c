#include <stdio.h>
#include <stdlib.h> 
#include "utils.h"

int main(){
    int count = 0, array [200], count2 = 0;
    
    FILE *file = open_file("input.txt", "r");

    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        array[count] = atoi(line_buffer);
        printf("%d\n", array[count]);
        if (array[count] > 1000){
            count2++;
        }
        count++;
    }
    
    fclose(file);

    printf("---%d\n", count2);

    count = 0;
    count2 = 0;
    while (count <= 200){
        while (count2 < count){
            if (array[count]+ array[count2] == 2020){
                printf("%d %d!!!!\n", array[count], array[count2]);
            }
            count2++;
        }
        count++;
        count2=0;
    }

}