
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Printing the current date and time in C
int main(void)
{
    int hours, minutes, seconds;
    time_t now;
    time(&now);

    struct tm *local = localtime(&now);

    hours = local->tm_hour;         // получаем часы с полуночи (0-23)
    minutes = local->tm_min;        // получить минуты, прошедшие после часа (0-59)
    seconds = local->tm_sec;        // получаем секунды, прошедшие через минуту (0-59)



    // печатаем местное время
      // до полудня
        printf("Time is %02d:%02d:%02d am\n", hours, minutes, seconds);


    return 0;
}