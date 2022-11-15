#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ERROR_DIV_BY_ZERO -2
#define EPSILON 0.000001f

float doSum(float a, float b) {
    return a + b;
}

float doSub(float a, float b) {
    return a - b;
}

float doMul(float a, float b) {
    return a * b;
}

float doDiv(float a, float b) {
    if (fabs(b) <= EPSILON) {
        exit(ERROR_DIV_BY_ZERO);
    }
    return a / b;
}

void main() {
    float (*menu[4])(float, float);
    int op;
    float a, b;
    menu[0] = doSum;
    menu[1] = doSub;
    menu[2] = doMul;
    menu[3] = doDiv;
    printf("enter a: ");
    scanf("%f", &a);
    printf("enter b: ");
    scanf("%f", &b);
    printf("enter operation [0 - add, 1 - sub, 2 - mul, 3 - div]");
    scanf("%d", &op);
    if (op >= 0 && op < 4) {
        printf("%.6f", menu[op](a, b));
    }
    getch();
}