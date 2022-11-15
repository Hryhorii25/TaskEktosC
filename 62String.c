#include <conio.h>
#include <stdio.h>
//Given an integer N (1 ≤ N ≤ 26). Print the first N uppercase (that is, uppercase) letters of the Latin alphabet.

int main(void)
{
    int N;
    printf("N: ");
    scanf("%i",&N);



    for (int i = 0; i < N; ++i) {

        printf("display as char %c\n",i+65);
        //printf("Hellow");
    }

    return 0;
}
