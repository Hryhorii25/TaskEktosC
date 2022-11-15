#include <conio.h>
#include <stdio.h>

int main() {

    int a[100];
    a[0] = 10;
    a[10] = 333;
    a[12] = 234;
    printf("%d %d %d", a[0], a[10], a[12]);

    int b[10] = {1, 2, 5, 3, 9, 6, 7, 7, 2, 4};
    return 0;

}
