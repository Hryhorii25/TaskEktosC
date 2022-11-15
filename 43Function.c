#include <stdio.h>


float  fahrTocelsius(float f){
    return (5.0/9.0) * (f-32.0);
}


int  celsiusTofahr(int c){
    return ((c + 40) * 1.8)-40;
}


int main() {
    printf("%i",celsiusTofahr(50)) ;
    printf("\n");

    printf("%i",fahrTocelsius(273)) ;

    return 0;
}





