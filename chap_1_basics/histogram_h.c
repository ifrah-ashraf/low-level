#include <stdio.h>

int main()
{
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF)
    {
        printf("I received: %c\n", ch);

        if (ch == ' ')
        {
            printf("length of current word is %d\n", count);
            count = 0;
        }
        else
        {
            count++;
        }

        if (ch == '\n')
            break;
    }

    return 0;
}