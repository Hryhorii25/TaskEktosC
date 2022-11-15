#include <conio.h>
#include <stdio.h>
#include <math.h>

struct point_t {
    int x;
    int y;
};

struct point_t1 {
    int x;
    int y;
} B;
float distance;


void main() {
    struct point_t A;
    float distance;

    A.x = 10;
    A.y = 20;

    distance = sqrt((float) (A.x*A.x + A.y*A.y));

    printf("x = %.3f", distance);
    getch();
}