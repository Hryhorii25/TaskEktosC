#include <stdio.h>


//arithmetic progression
int main(void)
{
    int a[10];
    int d,n, i;

    printf("N: ");
    scanf("%i",&n);

    printf("A[o]: ");
    scanf("%i",&a[0]);

    printf("D: ");
    scanf("%i",&d);

    for (i=1; i<n; ++i) a[i]=a[0]+(i)*d;

    for (i=0; i<n; ++i) printf("%i : %i\n",i,a[i]);
    return 0;
}