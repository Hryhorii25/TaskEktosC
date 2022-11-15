
//char                         1
//int                          4
//double	                   8
//float	                       4


//unsigned char	               1	  0	          255
//signed char ( char )	       1	-128	      127
//unsigned short               2	  0	          65535
//signed short( short )	       2	-32768	      32767
//unsigned int( unsigned )	   4	   0	     4294967296
//signed int ( int )	       4	-2147483648	 2147483647
//unsigned long	               4	   0	     4294967296
//signed long( long )	       4	-2147483648	 2147483647
//unsigned long long	       8	     0	          18446744073709551615





#include<conio.h>
#include<stdio.h>

int main() {
    char c;
    short s;
    int i;
    long l;
    long long L;

    printf("sizeof(char)  = %d\n", sizeof c);
    printf("sizeof(short) = %d\n", sizeof s);
    printf("sizeof(int)   = %d\n", sizeof i);
    printf("sizeof(long)  = %d\n", sizeof l);
    printf("sizeof(long long) = %d\n", sizeof L);
    printf("\n__________________________");




//hexadecimal and octal format
    int x = 0xFF;
    int y = 077;
    printf("hex x = %x\n", x);
    printf("dec x = %d\n", x);
    printf("oct x = %o\n", x);
    printf("oct y = %o\n", y);
    printf("dec y = %d\n", y);
    printf("hex y = %x", y);
    getch();



    return 0;
}