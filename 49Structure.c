#include <conio.h>
#include <stdio.h>
#include <math.h>

struct gasket {
    float weight;
    unsigned height;
    unsigned diameter;
};

void main() {
    struct gasket obj = { 12.f, 120, 30 };

    printf("gasket info:\n");
    printf("-------------------\n");
    printf("weight: %4.3f kg\n", obj.weight);
    printf("height: %6d cm\n", obj.height);
    printf("diameter: %4d cm\n", obj.diameter);

    getch();
}
