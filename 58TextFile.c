#define _CRT_SECURE_NO_WARNINGS

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int cntLines(const char *filename) {
    int lines = 0;
    int any;
    FILE *f = fopen(filename, "r");
    if (f == NULL) {
        return -1;
    }
    do {
        any = fgetc(f);
        //printf("%c", any);//debug
        if (any == '\n') {
            lines++;
        }
    } while(any != EOF);
    fclose(f);
    return lines;
}

void main() {
    printf("%d\n", cntLines("D:/ProgramingCodi/EmebededProjects/TaskEKTOS/1PrintAndScan/test.txt"));
    _getch();
}
