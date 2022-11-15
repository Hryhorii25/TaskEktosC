#include <conio.h>
#include <stdio.h>
//Output its elements located in lines with even numbers (2, 4, ...).
//Display elements line by line


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


    for(int i = 0; i < M; i+=2) {
        for (int j = 0; j < N; ++j)
            printf("%i ", a[i][j]);
        printf("\n ");
    }
    return 0;
}