#include <stdio.h>

int main()
{
    char freq[256] = {0};

    // in ASCII there are 255 different character
    int ch;

    while ((ch = getchar()) != '\n')
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            freq[ch]++;
        }
    }

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c  ", i);
            for (int j = 0; j < freq[i]; j++)
                printf("_");
            printf("\n");
        }
    }
    return 0;
}