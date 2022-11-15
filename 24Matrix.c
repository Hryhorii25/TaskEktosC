#include <conio.h>
#include <stdio.h>
//Output its elements in the following order:
//// first line from left to right, second line from right to left, third line from left to right, fourth line from right to left
int main(void) {
    int a[10][10];
    int N, M;

    printf("N: ");
    scanf("%i", &N);

    printf("M: ");
    scanf("%i", &M);




    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("a[%i] : ", i + 1);
            scanf("%i", &a[i][j]);
        }
    }


    for(int i = 0; i < M; ++i) {
        if (i % 2 == 0){
            for (int j = 0; j < N; ++j)
                printf("%i ", a[i][j]);
        printf("\n ");
    }else
        for (int j = N-1; j >=0 ; --j)
                printf("%i ", a[i][j]);
            printf("\n ");

     }
    return 0;
}
