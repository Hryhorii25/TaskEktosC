#include <conio.h>
#include <stdio.h>

struct byte1 {
    char a;
    char b;
    char c;
};

struct byte2 {
    char a;
    char b;
    char c;
    unsigned d: 1;
};

struct byte3 {
    char a;
    char b;
    char c;
    unsigned d: 1;
    unsigned: 0;
    unsigned e: 1;
};

void main() {
    printf("sizeof byte1 = %d\n", sizeof(struct byte1));
    printf("sizeof byte2 = %d\n", sizeof(struct byte2));
    printf("sizeof byte3 = %d", sizeof(struct byte3));
    getch();
}
