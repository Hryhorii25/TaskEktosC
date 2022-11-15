
#include <conio.h>
#include <stdio.h>

union Register32 {
    struct {
        unsigned char byte1;
        unsigned char byte2;
        unsigned char byte3;
        unsigned char byte4;
    } bytes;
    struct {
        unsigned short low;
        unsigned short high;
    } words;
    unsigned dword;
};

typedef union Register32 EAX;

void main() {
    EAX reg;
    reg.dword = 0x0000C0FF;
    printf("    dword \t%08x\n", reg.dword);
    printf(" low word \t%04x\n", reg.words.low);
    printf("high word \t%04x\n", reg.words.high);
    printf("    byte1 \t%02x\n", reg.bytes.byte1);
    printf("    byte2 \t%02x\n", reg.bytes.byte2);
    printf("    byte3 \t%02x\n", reg.bytes.byte3);
    printf("    byte4 \t%02x\n", reg.bytes.byte4);
    getch();
}