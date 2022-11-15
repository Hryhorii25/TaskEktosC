//Дана непустая строка. Вывести коды ее первого и последнего символа.
#include <conio.h>
#include <stdio.h>
#include <string.h>

//Дано целое число N (>0) и символ C. Вывести строку длины N, которая состоит из символов C.

int main(void) {
    char c;
    int n;
    printf("Char is: ");
    scanf("%c", &c);
    printf("int N is: ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("%c",c);

    }
    return 0;
}