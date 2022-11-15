#include <conio.h>
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

void main() {
    enum Gender a, b;
    a = MALE;
    b = FEMALE;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    getch();
}