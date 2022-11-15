#include <conio.h>
#include <stdio.h>


//Output the elements of the K row of this matrix
int main(void)
{
    int a[10][10];
    int N,M,i,j,K;

    printf("N: ");
    scanf("%i",&N);

    printf("M: ");
    scanf("%i",&M);

    printf("K: ");
    scanf("%i",&K);


    for (int i = 0; i < M; ++i){
        for(int j = 0; j < N; ++j){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i][j]);}}

    for(int i = 0; i < N; ++i) {
        printf("%i  ", a[K-1][i]);
    }
    return 0;
}