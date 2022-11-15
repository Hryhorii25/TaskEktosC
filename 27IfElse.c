

#include <stdio.h>

int main(){

    //Given an integer. If it is positive, then add to
    //him 1; otherwise, don't change it. Output the resulting number


    //    int A;
//    printf("Write number\n");
//    scanf("%i",&A);
//
//   if (A>0) A++;
//    printf("%i",A);




//Given an integer. If it is positive, then add to
//him 1; otherwise, subtract 2 from it. Output the resulting number.

    int A;
    printf("Write number\n");
    scanf("%i",&A);

   if (A>0) A=A+2;
   else
       A=A-2;

    printf("%i" ,A);

    return 0;



}