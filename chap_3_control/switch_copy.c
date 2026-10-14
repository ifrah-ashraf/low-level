#include <stdio.h>

void escape(char s[], char t[], int end);

int main(void)
{
    int ch;
    char s[100];
    char t[200];
    int i = 0;

    while (i < 99 && (ch = getchar()) != EOF)
    {
        s[i++] = ch;
    }

    escape(s, t, i);

    return 0;
}

void escape(char s[], char t[], int end)
{
    int ind = 0;
    int p = 0;

    while (ind < end)
    {
        switch (s[ind])
        {
        case '\n':
            t[p++] = '\\';
            t[p++] = 'n';
            break;

        case '\t':
            t[p++] = '\\';
            t[p++] = 't';
            break;

        default:
            t[p++] = s[ind];
            break;
        }

        ind++;
    }

    t[p] = '\0';
    printf("%s", t);
}
