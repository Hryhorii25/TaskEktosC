#include <conio.h>
#include <stdio.h>

int main(void)
{
    int a[10][10];
    int N,M,i,j;

    printf("N: ");
    scanf("%i",&N);

    printf("M: ");
    scanf("%i",&M);



    for (i=1; i<=M+1; ++i){
        for (j=1; j<=N+1; ++j)
            a[i][j]=j*5;
    }

    for(int i = 1; i < M+1; ++i) {
        for (int j = 1; j < N+1; ++j)
            printf("%i ", a[i][j]);
        printf("\n ");


    }
    return 0;
}

