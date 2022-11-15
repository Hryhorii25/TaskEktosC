#include<stdio.h>

int main() {

    //Given two integers A and B (A < B). Sort all in ascending order
    //the integers between A and B (including the numbers A and B themselves)

    int i,A,B;
    printf("Write A: ");
    scanf("%i", &A);
    printf("Write B: ");
    scanf("%i", &B);

    for (i = A; i <= B; i++) {
        printf("%i\n",i);
    }
    return 0;
}
