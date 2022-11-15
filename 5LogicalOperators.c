#include<stdio.h>
#include<conio.h>



int main() {
    int pass;

    //if
    printf("Enter password: ");
    scanf("%d", &pass);

    if (pass == 1234) {
        printf("Welcome");
    } else {
        printf("Access denied!");
    }


//      > more
//      < less
//      >= more or equal
//      <= less or equal
//      == equals
//      != not equal
//      ! negation of an expression


    return 0;
}