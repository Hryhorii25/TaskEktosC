
//FILE* fopen(const char* filename, const char* mode);

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
    //With the help of the file variable, we will access the file
    FILE *file;
    //Open a text file with write permissions
    file = fopen("D:/ProgramingCodi/EmebededProjects/TaskEKTOS/1PrintAndScan/test.txt", "w+t");
    //Writing to a file
    fprintf(file, "Hello, World2");
    //Closing the file
    fclose(file);
    getch();
}