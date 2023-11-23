#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "FitnessDataStruct.h"

// Struct moved to header file
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

                    }



// Define any additional variables here
// Global variables for filename and FITNESS_DATA array
char Filename [100];

int A(){
    printf("Input filename: ");
    scanf("%s", Filename);

    if (access(Filename, F_OK) != 0){
        printf("Error: Could not find or open the file.\n");
        return 1;
    }
    else{
        printf("File successfully loaded.\n");
        return 0;
    }
}

int B(){
    FITNESS_DATA data [250];
    int buffer_size = 250;
    char line[buffer_size];
    int counter = 0;

    FILE *file = fopen(Filename, "r");

    char date[15];
    char time[10];
    char steps[10];

    while (fgets(line, buffer_size, file)){
        tokeniseRecord(line, ",", date, time, steps);

        strcpy(data[counter].date, date);
        strcpy(data[counter].time, time);
        data[counter].steps = atoi(steps);

        counter++;
    }

    fclose(file);

    printf("Total records: %d\n", counter);

}

int C(){
    FITNESS_DATA data [250];
    int buffer_size = 250;
    char line[buffer_size];
    int counter = 0, lowest = 0;

    FILE *file = fopen(Filename, "r");

    char date[15];
    char time[10];
    char steps[10];

    while (fgets(line, buffer_size, file)){
        tokeniseRecord(line, ",", date, time, steps);

        strcpy(data[counter].date, date);
        strcpy(data[counter].time, time);
        data[counter].steps = atoi(steps);

        if (data[counter].steps < data[lowest].steps){
            lowest = counter;
        }

        counter++;
    }

    fclose(file);

    printf("Fewest steps: %s %s\n", data[lowest].date, data[lowest].time);
}

int D(){
    FITNESS_DATA data [250];
    int buffer_size = 250;
    char line[buffer_size];
    int counter = 0, highest = 0;

    FILE *file = fopen(Filename, "r");

    char date[15];
    char time[10];
    char steps[10];

    while (fgets(line, buffer_size, file)){
        tokeniseRecord(line, ",", date, time, steps);

        strcpy(data[counter].date, date);
        strcpy(data[counter].time, time);
        data[counter].steps = atoi(steps);

        if (data[counter].steps > data[highest].steps){
            highest = counter;
        }

        counter++;
    }

    fclose(file);

    printf("Largest steps: %s %s\n", data[highest].date, data[highest].time);
}

int E(){
    FITNESS_DATA data [250];
    int buffer_size = 250;
    char line[buffer_size];
    int counter = 0, total = 0;

    FILE *file = fopen(Filename, "r");

    char date[15];
    char time[10];
    char steps[10];

    while (fgets(line, buffer_size, file)){
        tokeniseRecord(line, ",", date, time, steps);

        strcpy(data[counter].date, date);
        strcpy(data[counter].time, time);
        data[counter].steps = atoi(steps);

        total = total + data[counter].steps;

        counter++;
    }

    fclose(file);

    float meanfloat = (float)total/counter;
    int meanint;

    if(meanfloat>=0){
        meanint = (int)(meanfloat + 0.5);
    }else{
        meanint = (int)(meanfloat - 0.5);
    }


    printf("Mean step count: %d\n", meanint);
}

int F(){
    FITNESS_DATA data [250];
    int buffer_size = 250;
    char line[buffer_size];
    int counter = 0, start = 0, end = 0, run = 0;

    FILE *file = fopen(Filename, "r");

    char date[15];
    char time[10];
    char steps[10];

    while (fgets(line, buffer_size, file)){
        tokeniseRecord(line, ",", date, time, steps);

        strcpy(data[counter].date, date);
        strcpy(data[counter].time, time);
        data[counter].steps = atoi(steps);

        if (data[counter].steps > 500){
            run++;
        }
        else{
            if (run > end - start){
                end = counter - 1;
                start = counter - run;
            }
            run = 0;
        }

        counter++;
    }

    fclose(file);

    printf("Longest period start: %s %s\nLongest period end: %s %s\n", data[start].date, data[start].time, data[end].date, data[end].time);
}


int main() {
    char choice [1];
    int x;

    printf("Menu Options:\nA: Specify the filename to be imported\nB: Display the total number of records in the file\nC: Find the date and time of the timeslot with the fewest steps\nD: Find the date and time of the timeslot with the largest number of steps\nE: Find the mean step count of all the records in the file\nF: Find the longest continuous period where the step count is above 500 steps\nQ: Quit\nEnter choice: ");
    scanf("%s", choice);

    switch (choice[0]){
        case 'A':           x = A();
                            if (x == 0){
                                main();
                            }else{
                                return 1;
                            }
        break;

        case 'B':           B();
                            main();
        break;

        case 'C':           C();
                            main();
        break;

        case 'D':           D();
                            main();
        break;

        case 'E':           E();
                            main();
        break;

        case 'F':           F();
                            main();
        break;

        case 'Q':           return 0;
        break;

        default:            printf("Invalid choice. Try again.\n");
                            main();
    }


}








