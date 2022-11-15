#include <conio.h>
#include <stdio.h>
//Find the length of the string entered by the user using the pointer
void main() {
    char buffer[128];
    char *p;
    unsigned length = 0;

    scanf("%127s", buffer);
    p = buffer;
    while (*p != '\0') {
        p++;
        length++;
    }

    printf("length = %d", length);
    getch();
}
