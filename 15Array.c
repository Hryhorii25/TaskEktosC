#include <conio.h>
#include <stdio.h>

#define SIZE 10u


//Delete the item selected by the user.
int main() {
    int A[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    unsigned i;
    int index;


    for (i = 0; i < SIZE; i++) {
        printf("(%d)=%d ", i, A[i]);
    }


    while (1) {
        printf("\nEnter index of element to delete ");
        scanf("%d", &index);
        if (index > 0 && index < SIZE) {
            break;
        }
    }

    for (i = index; i < SIZE-1; i++) {
        A[i] = A[i+1];
    }


    for (i = 0; i < SIZE-1; i++) {
        printf("(%d)=%d ", i, A[i]);
    }

    getch();
}
