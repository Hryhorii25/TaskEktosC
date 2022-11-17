#include <conio.h>
#include <stdio.h>

int main()
{
    int a = 10;
    float b = 35.75;
    void *ptr;     // Declaration of a void pointer.

    ptr = &a;      //Assigning the address of an integer variable to a null pointer.

    //Below is an example of taking the value of an integer variable
    //with a void pointer. Here (int*)ptr is used for
    //typecasts, and *((int*)ptr) will refer to the content
    //memory where the variable a is located.
    printf("The value of an integer variable = %d\n", *((int*)ptr));

    ptr=&b;        // Assigning the address of a float variable to a void pointer.

    //Below is an example of taking the value of a float variable using a void pointer.
    printf("The value of an integer variable = %f\n", *((float*)ptr));

    return 0;
}