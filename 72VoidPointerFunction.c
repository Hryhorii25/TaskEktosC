#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int swap(void *a, void *b, size_t size) {
    char* tmp;

    tmp = (char*) malloc(size);
    memcpy(tmp, a, size);
    memcpy(a, b, size);
    memcpy(b, tmp, size);
    free(tmp);
}

int main() {
    float a = 10.f;
    float b = 20.f;
    double c = 555;
    double d = 777;
    unsigned long e = 2ll;
    unsigned long f = 3ll;

    printf("a = %.3f, b = %.3f\n", a, b);
    swap(&a, &b, sizeof(float));
    printf("a = %.3f, b = %.3f\n", a, b);

    printf("c = %.3f, d = %.3f\n", c, d);
    swap(&c, &d, sizeof(double));
    printf("c = %.3f, d = %.3f\n", c, d);

    printf("e = %ld, f = %ld \n", e, f);
    swap(&e, &f, sizeof(unsigned long));
    printf("e = %ld, f = %ld \n", e, f);

    return 0;
}