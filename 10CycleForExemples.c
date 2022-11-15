#include<stdio.h>

int main() {

    int i,N;
    int S=0;

    printf("Write N: ");
    scanf("%i", &N);

    for (int i = 0; i < N; ++i) {
        S+=N;
    }
    printf("%d",S);
    return 0;
}