
#include <stdio.h>



//You are given an integer in the range from 1 to 7. Output a string - the name of the day
//weeks corresponding to this number
int main(void)
{

    int k;
    printf("Enter an integer in the range 1-7:") ;
    scanf ("%i", &k);



    switch (k) {
        case 1: printf("Monday ");
        break;
        case 2: printf("Tuesday ");
            break;
        case 3: printf("Wednesday ");
            break;
        case 4:printf("Thursday ");
        break;
        case 5: printf("Friday ");
        break;
        case 6: printf("Saturday ");
            break;
        case 7:printf("Sunday ");
        break;
    }
    return 0;
}