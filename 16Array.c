#include <stdio.h>
//form and output an integer array of size N, containing powers of two from one to N
int main(void)
{
    int a[10];
    int n, i=1;

    printf("N: ");
    scanf("%i",&n);

    for (i=1, a[0]=2; i<n; ++i) a[i]=a[i-1]*2;

    for (i=0; i<n; ++i) printf("%i : %i\n",i,a[i]);
    return 0;
}
