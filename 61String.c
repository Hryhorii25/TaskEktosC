#include <conio.h>
#include <stdio.h>

void main() {
    char buffer[128];
    unsigned len = 0;

    scanf("%127s", buffer);

    while (buffer[len] != '\0') {
        len++;
    }

    printf("length(%s) == %d", buffer, len);

    getch();
}