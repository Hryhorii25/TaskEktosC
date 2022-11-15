
#include <conio.h>
#include <stdio.h>
#include <string.h>


void main() {


    char a[128];
    char b[128];
    scanf("%127s", a);
    scanf("%127s", b);



   // To copy
    //strcpy
//    strcpy(b,a);
//     printf("%s",b) ;


   //function returns the length of string
   // printf("%llu",strlen(a)) ;


   //Concatenation
//    strncat(a, b, strlen(b)/2);
//    printf("%s", a);


//String comparison
    //printf("%i",strcmp(a,b));


    //appends T to the end of a.
    strcat('T',a);
    //    printf("%s", a);







    getch();
}