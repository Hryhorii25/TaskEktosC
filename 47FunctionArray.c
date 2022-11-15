#include <conio.h>
#include <stdio.h>

void printArray(int *arr, unsigned size) {
    unsigned i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void main() {
    int x[10] = {1, 2, 3, 4, 5};
    printArray(x, 10);
    getch();
}