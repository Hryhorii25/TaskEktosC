#include <conio.h>
#include <stdio.h>

int main() {
    int a[10] = {1, 2, 5, 3, 9, 6, 7, 7, 2, 4};
    unsigned i;
    int max;

    max = a[0];
    for (i = 1; i<10; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("max element is %d", max);
    return 0;
}