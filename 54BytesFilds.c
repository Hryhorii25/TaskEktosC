

#include <conio.h>
#include <stdio.h>

struct byte {
    unsigned a0: 1;
    unsigned a1: 1;
    unsigned a2: 1;
    unsigned a3: 1;
    unsigned a4: 1;
    unsigned a5: 1;
    unsigned a6: 1;
    unsigned a7: 1;
};

void main() {
    struct byte x = {0, 0, 0, 1, 0, 0, 0, 0};
    x.a1 = 1;
    printf("sizeof byte = %d\n", sizeof(struct byte));
    printf("x.a1 = %d\n", x.a1);
    printf("x.a3 = %d\n", x.a3);
    printf("x.a5 = %d", x.a5);
    getch();
}