#include <conio.h>
#include <stdio.h>


//an array stores the address where its elements start from. Using a pointer, you can also access the elements of an array
void main() {
    int A[5] = {1, 2, 3, 4, 5};
    int *p = A;

    printf("%d\n", A[3]);
    printf("%d\n", *(A + 3));
    printf("%d\n", *(p + 3));

    getch();
}
