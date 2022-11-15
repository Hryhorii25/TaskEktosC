
#include <conio.h>
#include <stdio.h>


//The operator takes three arguments.
// If the first argument is true, then the second argument is returned; if false, the third argument is returned.
void main() {
    int a, b, c;

    scanf("%d %d", &a, &b);

    c = (a > b) ? b : a;

    printf("%d", c);
    _getch();
}


//void main() {
//    int a;
//
//    scanf("%d", &a);
//
//    printf("%d", a > 0 ? a : -a);
//    _getch();
//}