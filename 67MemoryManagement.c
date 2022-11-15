#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//a simple example of memory allocation

void main() {
    int *p = NULL;
    int *p1 = NULL;
    p = (int*) malloc(10);

//    p1 = (int*) calloc(0,10);




    free(p);
}
