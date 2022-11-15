#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



//Converts a string to an integer

//double atof (const char* str);
//
//long int atol ( const char * str );

void main() {
    char ex1[] = "   23  ";
    char ex2[] = "rule43";
    char ex3[] = "21st of May";
    printf("%d\n", atoi(ex1));
    printf("%d\n", atoi(ex2));
    printf("%d\n", atoi(ex3));
    getch();
}


