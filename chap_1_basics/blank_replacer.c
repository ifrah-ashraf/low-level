#include <stdio.h>

int main()
{
    int c;
    int flag = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (!flag)
            {
                printf("%c", c);
                flag = 1;
            }
        }
        else
        {
            flag = 0;
            printf("%c", c);
        }
    }

    return 0;
}