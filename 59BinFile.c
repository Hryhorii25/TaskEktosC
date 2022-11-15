#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define ERROR_FILE_OPEN -3

void main() {
    FILE *output = NULL;
    int number;

    output = fopen("D:/ProgramingCodi/EmebededProjects/TaskEKTOS/1PrintAndScan/test2.txt", "wb");
    if (output == NULL) {
        printf("Error opening file");
        getch();
        exit(ERROR_FILE_OPEN);
    }

    scanf("%d", &number);
    fwrite(&number, sizeof(int), 1, output);

    fclose(output);
    _getch();
}