#include <conio.h>
#include <stdio.h>


int main(void)
{
    int a[10][10];
    int N,M,i,j,d;

    printf("N: ");
    scanf("%i",&N);

    printf("M: ");
    scanf("%i",&M);

    printf("d: ");
    scanf("%i",&d);


    for (int i = 0; i < M; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i][1]);}



    for (i=0; i<=M+1; ++i){
        for (j=2; j<=N+1; ++j)
            a[i][j]=a[i][j-1]+d;
    }

    for(int i = 0; i < M; ++i) {
        for (int j = 1; j < N+1; ++j)
            printf("%i ", a[i][j]);
        printf("\n ");


    }
    return 0;
}