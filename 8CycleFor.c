#include<conio.h>
#include<math.h>
#include<stdio.h>

int main() {
    int i,j;


//    for (i = 1; i < 100; i++) {
//        printf("%i\n",i);
//    }


//    for (i = 100; i > 0; i--) {
//        printf("%i\n",i);
//    }

    //back for
//    for (i = 1; i < 100; i++) {
//        printf("Hello ");
//    }

//    for (i = 1; i < 100; i++) {
//        printf("Hello\n");
//    }

    //inves for
    for (i = 1; i < 11; i++) {
        for (j = 1; j < 11; j++) {
            if (j > i) {
                break;
            }
            printf("%4d", i*j);
        }
        printf("\n");
    }



    return 0;
}