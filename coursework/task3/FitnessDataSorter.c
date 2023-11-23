#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here

char filename [100];

// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL && token[4]=='-' && token[7]=='-' && token[10]=='\0') {
        strcpy(date, token);
    } else{
        printf("Error: invalid file\n");
        exit(1);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL && token[2]==':' && token[5]=='\0') {
        strcpy(time, token);
    }   else{
        printf("Error: invalid file\n");
        exit(1);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL && token[1] != '\0') {
        strcpy(steps, token);
    }   else{
        printf("Error: invalid file\n");
        exit(1);
    }
    
    // Free the duplicated string
    free(inputCopy);

}



int main(){
    printf("Enter Filename: ");
    scanf("%s", filename);

    FITNESS_DATA data [250];
    int buffer_size = 250;
    char line[buffer_size];
    int counter = 0;

    FILE *file = fopen(filename, "r");
    if (!file){
        printf("Error: invalid file\n");
        exit(1);
    }

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

    int x = 0,y = 0;
    FITNESS_DATA z;
    while (x < counter){
        y = x + 1;

        while (y < counter){
            
            if (data[x].steps < data[y].steps){
                
                z = data[x];
                data[x] = data[y];
                data[y] = z;
            }

            y++;
        }

        x++;
    }

    char destination [100];
    
    strcpy(destination, filename);
    strcat(destination, ".tsv");

    FILE *file2 = fopen(destination, "w");

    x = 0;
    while (x < counter){
        fprintf(file2, "%s\t%s\t%d\n", data[x].date, data[x].time, data[x].steps);
        x++;
    }

    fclose(file2);
    printf("Data sorted and written to %s\n", destination);

    return 0;
}