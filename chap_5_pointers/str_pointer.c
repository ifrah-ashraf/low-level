#include <stdio.h>

int main(void) {
    char name[] = "Pointer";
    char *p = name;

    printf("%c\n", *p);
    printf("%c\n", *(p + 3));

    p++;

    printf("%c\n", *p);
    printf("%s\n", p);

    return 0;
}