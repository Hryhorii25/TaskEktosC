
#include <stdio.h>

//Check if N is a Fibonacci number. If is, then
//output TRUE, if not, output FALSE.

int main(void)
{
    int  N,F,F1,F2;
    printf("N:");
    scanf("%i",&N);
    F1=1;
    F2=1;
    F=0;

    while (F<N){
        F=F2+F1;
        F2=F1;
        F1=F;
    }
    printf("%i\n",F==N);
    return 0;
}