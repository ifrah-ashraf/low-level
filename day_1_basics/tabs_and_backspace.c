#include <stdio.h>

int main()
{
    int c;

    while (c != EOF)
    {
        if (c == '\t')
        {
            c = '\b';
        }
        if (c == '\\')
        {
            c = '\\';
        }
        printf("%c", c);

        c = getchar();
    }
    return 0;
}