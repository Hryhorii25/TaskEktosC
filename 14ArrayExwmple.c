#include <conio.h>
#include <stdio.h>

//Это макрос. SIZE в коде будет заменено на 10u
#define SIZE 10u

int main() {
    int A[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    unsigned i, j;
    unsigned half;
    unsigned tmp;

    half = SIZE / 2;

    for (i = 0, j = SIZE - 1; i < half; i++, j--) {
        tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
    }

    for (i = 0; i < SIZE; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}