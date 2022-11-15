
#include <stdio.h>
#include <conio.h>

int main() {
    int a = 0x77, b = -20;
    char c = 'F';
    float f = 12.2341524;
    double d = 2e2;
    char* string = "Hello, World!";

    printf("%.3f\n", f);
    printf("%.*f\n", 2, f);
    printf("%010.3f\n", d);
    printf("%*d\n", 6, a);
    printf("%+d\n", b);
    printf("%0.6d\n", a);
    printf("%.f\n", d);
    printf("%.4s\n", string);
    printf("__________________\n");



    long long x = 12300000000579099123;
    short i = 10;
    printf("%llu\n", x);
    printf("%d\n", i);
    printf("%hd\n", i);



    return 0;
}