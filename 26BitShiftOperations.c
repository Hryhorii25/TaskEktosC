#include <conio.h>
#include <stdio.h>

int main(){
    int a = 12;
    printf("%d << 1 == %d\n", a, a << 1);
    printf("%d << 2 == %d\n", a, a << 2);
    printf("%d >> 1 == %d\n", a, a >> 1);
    printf("%d >> 2 == %d\n", a, a >> 2);

    printf("_________________________\n");

    float b = 10.0f;
    float c = (float) (*((unsigned int*)&b) >> 2);
    printf("%.3f >> 2 = %.3f", b, c);

    return 0;
}