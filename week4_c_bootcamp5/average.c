#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(){
    int count = 0;
    float avg;
    
    FILE *file = open_file("numbers.dat", "a+");

    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        avg += atof(line_buffer);
        count++;
    }

    avg = avg/count;

    int len = strlen(line_buffer);
    if (line_buffer[len-1] == '\n'){
        fprintf(file, "%f\n", avg);
    }
    else{
        fprintf(file, "\n%f\n", avg);
    }

    fclose(file);
    return(0);
}

//This works but there is a weird thing with c memory that I dont quite understnad that happens when converting a string to a float from a file
//Logic is correct though :)