#include <stdio.h>

int main(void) {
    unsigned int a = 12u;
    unsigned int b = 10u;

    printf("a & b = %u\n", a & b);
    printf("a | b = %u\n", a | b);
    printf("a ^ b = %u\n", a ^ b);
    printf("a << 1 = %u\n", a << 1);
    printf("a >> 1 = %u\n", a >> 1);
    printf("~a = 0x%X\n", ~a);

    return 0;
}