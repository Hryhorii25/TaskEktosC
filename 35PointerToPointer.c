#include <conio.h>
#include <stdio.h>


//
//A pointer stores the address of a memory area. You can create a pointer to a pointer,
// then it will store the address of the pointer and be able to access its content. A pointer to a pointer is defined as
//<type> **<name>;


void main() {
    int A;
    int B;
    int *p;
    int **pp;

    A = 10;
    B = 111;
    p = &A;
    pp = &p;

    printf("A = %d\n", A);
    *p = 20;
    printf("A = %d\n", A);
    *(*pp) = 30;    //здесь скобки можно не писать
    printf("A = %d\n", A);

    *pp = &B;
    printf("B = %d\n", *p);
    **pp = 333;
    printf("B = %d", B);

    getch();
}
