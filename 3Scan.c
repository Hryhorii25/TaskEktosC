#include <stdio.h>
#include <string.h>
int main(void) {

   int a;
   char b;
   char * st;

   printf("Write number  a: ");
    scanf("%i", &a);

    printf("Write letter  b: ");
    scanf("%c", &b);

    printf("Write letter  word: ");
    scanf("%s", &st);


//
    printf("%d",a);
    printf("%c",b);
    printf("%s",&st);

    return 0;
}
