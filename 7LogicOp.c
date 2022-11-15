#include <conio.h>
#include <stdio.h>

int main() {
//    Logical operator NOT
    int i = 0;
    if (i) {
        printf("i is true\n");
    }
    if (!i) {
        printf("i is not true\n");
    }


    // AND, logical multiplication

//    char gender;
//    unsigned int age;
//
//    printf("Enter gender ('M' or 'F')\n");
//    scanf("%c", &gender);
//    printf("Enter age\n");
//    scanf("%u", &age);
//
//    if (gender == 'M' && age > 17) {
//        printf("Wellcome");
//    } else {
//        printf("Go away");
//    }


    // logical addition, OR

    char genderInput;
    char gender;
    unsigned int age;
    unsigned int height;

    printf("Enter gender ('M' or 'F')\n");
    scanf("%c", &genderInput);
    printf("Enter age\n");
    scanf("%u", &age);
    printf("Enter height\n");
    scanf("%u", &height);

    if (genderInput == 'M' || genderInput == 'm') {
        gender = 1;
    } else {
        gender = 0;
    }

    if ((age > 17 && height >= 180) && gender) {
        printf("Wellcome");
    } else {
        printf("Go away");
    }

    return 0;
}