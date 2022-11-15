#include <conio.h>
#include <stdio.h>

void main() {
    int A = 100;
    int *p;

    //Get address of variable A
    p = &A;

    //Выводим адрес переменной A
    printf("%p\n", p);

    //Output the address of variable A
    printf("%d\n", *p);

    //Change the content of variable A
    *p = 200;

    printf("%d\n", A);
    printf("%d", *p);

    getch();
}