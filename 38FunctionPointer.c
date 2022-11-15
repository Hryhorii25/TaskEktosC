#include <conio.h>
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

void main () {
    //We declare a pointer to the function
    int (*fptr)(int, int) = NULL;
    int result;
    //We assign a value to the pointer - the address of the function

    fptr = sum;
    //The call is made in the same way as a normal function.
    result = fptr(10, 40);
    printf("%d", result);
    getch();
}
