#include <conio.h>
#include <stdio.h>

void main() {

    const char* p = NULL;
    unsigned length = 0;
    char word[] = "Hello world!";

    p = word;
    while (*p++) {
        length++;
    }
    //Operation *p = '?' prohibited and will result in an error

    printf("length(\"%s\") = %d", word, length);






    //    int x = 100;
//    int *const p = &x;
//
//    printf("x = %d\n", x);
//    *p = 200;
//    printf("x = %d", x);
    //operation p = &? and p++ forbidden


    // const int x = 100;
    //    const int *p;
    //
    //    p = &x;
    //
    //    printf("x = %d\n", x);
    //    printf("x = %d", *p);
    //
    //    getch();
    getch();
}