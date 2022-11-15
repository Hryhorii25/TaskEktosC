#include <conio.h>
#include <stdio.h>


int odd(int);
int even(int);

void main() {
    printf("if %d odd? %d\n", 11, odd(11));
    printf("if %d odd? %d\n", 10, odd(10));
    getch();
}

//Definition of functions
int even(int a) {
    if (a) {
        odd(--a);
    } else {
        return 1;
    }
}

int odd(int a) {
    if (a) {
        even(--a);
    } else {
        return 0;
    }
}
