#include <conio.h>
#include <stdio.h>
//Passing Arguments
void change(int a) {
    a = 100;
    printf("%d\n", a);
}

void change1(int *a) {
    *a = 100;
    printf("%d\n", *a);
}



void main() {
    int d = 200;
    printf("%d\n", d);
    change(d);
    printf("%d", d);

    printf("________________________________");


    int d1 = 200;
    printf("%d\n", d1);
    change(&d1);
    printf("%d", d1);
    getch();

    return;
}
