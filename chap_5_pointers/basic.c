#include <stdio.h>

int main()
{
    int x = 300;
    int *ptr = &x;

    printf("value is %d\n",*ptr);
    printf("address is %p\n", ptr);

    return 0;
}