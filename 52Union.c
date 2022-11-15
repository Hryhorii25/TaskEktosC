#include <conio.h>
#include <stdio.h>

union floatint{
    float f;
    int i;
};

void main() {
    union floatint u = {10.f};
    printf("%f\n", u.f);
    printf("%x\n", u.i);
    getch();
}
