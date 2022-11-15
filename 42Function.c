#include <conio.h>
#include <stdio.h>

//Формальные параметры имеют имена a и b
//по ним мы обращаемся к переданным аргументам внутри функции
int sum(int a, int b) {
    return a+b;
}

float square(float x) {
    return x*x;
}

void main() {
    //Actual parameters can have any name, including no name
    int one = 1;
    float two = 2.0;

    //We pass variables, the second variable is cast to the desired type
    printf("%d\n", sum(one, two));
    //Передаём числовые константы
    printf("%d\n", sum(10, 20));
    //We pass numeric constants of the wrong type, they are automatically converted to the desired
    printf("%d\n", sum(10, 20.f));
    //An integer type variable is cast to a floating point type
    printf("%.3f\n", square(one));

    printf("%.3f\n", square(sum(2 + 4, 3)));

    getch();
}