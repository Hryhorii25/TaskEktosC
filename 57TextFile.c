#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define ERROR_OPEN_FILE -3

void main() {
    FILE *file;
    char buffer[128];

    file = fopen("D:/ProgramingCodi/EmebededProjects/TaskEKTOS/1PrintAndScan/test.txt", "w");
    if (file == NULL) {
        printf("Error opening file");
        getch();
        exit(ERROR_OPEN_FILE);
    }
    fprintf(file, "Hello, World!");
    freopen("D:/ProgramingCodi/EmebededProjects/TaskEKTOS/1PrintAndScan/test.txt", "r", file);
    if (file == NULL) {
        printf("Error opening file");
        getch();
        exit(ERROR_OPEN_FILE);
    }
    fgets(buffer, 127, file);
    printf("%s", buffer);
    fclose(file);
    getch();
}
