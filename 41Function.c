#include <stdio.h>
int power(int m, int n);
/* function test power */

float sqr(float x) {
    float tmp = x*x;
    return tmp;
}




int main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d %d \n", i, power(2,i));

    //printf("%.3f", sqr(9.3f));
    return 0;
}


int power(int base, int n)
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}
