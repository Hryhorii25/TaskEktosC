#include <stdio.h>

int main(void)
{

    int month;
   printf("Month:") ;
   scanf ("%i", &month);

   switch (month) {
   case 12:
   case 1:
   case 2:
       printf("winter\n") ;
       break;
   case 3:
   case 4:
   case 5:
       printf("Spring\n") ;
       break;
   case 6:
   case 7:
   case 8:
       printf("summer\n") ;
       break;
   case 9:
   case 10:
   case 11:
       printf("autumn\n") ;
       break;
   }
   return 0;
}