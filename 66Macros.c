#include <conio.h>
#include <stdio.h>


#define P 3.141

int main() {
    int R,S,L,D;

    printf("Enter radius");
    scanf("%i",& R);

    S=P*(R*R);
    D=2*R;
    L=P*D;


    printf("Area circle= %i\n", S);
    printf("Diameter circle= %i\n", D);
    printf("Circumference circle= %i\n", L);

    return 0;
}





//#define LENGTH 128
//
//void main() {
//    char buffer[LENGTH];
//
//    scanf("%127s", buffer);
//    printf("%s", buffer);
//
//    getch();
//}


//#define MAX(x, y) x > y ? x: y
//
//void main() {
//    int a, b;
//    scanf("%d", &a);
//    scanf("%d", &b);
//    printf("max number is %d", MAX(a, b));
//
//    getch();
//}




//#define DEBUG
//#ifdef DEBUG
//#define info(msg) printf("%s\n", msg)
//#else
//#define info(msg)
//#endif
//
//void main() {
//    unsigned int bound, i, sum = 0;
//
//    scanf("%d", &bound);
//    info("step 1 finished");
//    for (i = 0; i < bound; i++) {
//        sum += i;
//    }
//    info("step 2 finished");
//    printf("%d", sum);
//    getch();
//}


#include <stdio.h>

//int main() {
//    int a[] = {
//#include "D:/ProgramingCodi/EmebededProjects/TaskEKTOS/1PrintAndScan/test2.txt";
//    };
//    size_t i;
//
//    for (i = 0; i < 10; i++) {
//        printf("%d\n", a[i]);
//    }
//    _getch();
//    return 0;
//}