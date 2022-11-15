#include<conio.h>
#include<stdio.h>

int main() {
    float number;

    printf("Enter number ");
    scanf("%f", &number);

    if (number < 0.0f)
        number = -number;

    printf("%.6f", number);
    getch();
}