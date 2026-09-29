#include <stdio.h>

int atoi(char s[]);

int main()
{
    char test[20] = "+99999999ppl" ;
    int n = atoi(test);
    printf("value of n is %d\n", n);
    return 0 ;
}

int atoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}