#include <stdio.h>

int main(void) {
    char str[] = "ABCDE";
    char *p = str;
    char *q = str + 2;

    printf("before increment\n");
    printf("%c\n", *p);
    printf("%c\n", *q);

    printf("After increment\n");
    *q++ = *p++ ;

    printf("%s\n", str);
    printf("%c\n", *p);
    printf("%c\n", *q);

    return 0;
}