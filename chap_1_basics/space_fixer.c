#include <stdio.h>

int main(void)
{
    char words[100];

    int j = 0;
    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        if (j >= 99)
            break;

        words[j++] = ch;
    }

    while (j > 0 && words[j - 1] == ' ')
        j--;

    words[j] = '\0';

    for (int i = 0; words[i] != '\0'; i++)
        printf("%c", words[i]);

    printf("\n");

    return 0;
}
