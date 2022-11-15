#include <conio.h>
#include <stdio.h>

struct Test1 {
    char a;
    char b;
    int c;
} A1;

struct Test2 {
    int x;
    int y;
} B1;

struct Test3 {
    char a;
    char b;
    char c;
    int d;
} C1;

void main() {
    printf("sizeof(A) = %d\n", sizeof(A1));
    printf("sizeof(B) = %d\n", sizeof(B1));
    printf("sizeof(C) = %d\n", sizeof(C1));

    getch();
}
