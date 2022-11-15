#include <conio.h>
#include <stdio.h>

void main() {
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *a, *b;

    a = &A[0];
    b = &A[9];

    printf("&A[0] == %p\n", a);
    printf("&A[9] == %p\n", b);

    if (a < b) {
        printf("a < b");
    } else {
        printf("b < a");
    }

    getch();
}
