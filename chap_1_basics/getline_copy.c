#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);
void printer(char line[]);
void cleaner(char line[], int length);

/* print the longest input line */
int main()
{
    int len;               /* current line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    max = 0;
    while ((len = my_getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }

        if (len > 30)
        {
            printer(line);
        }

        if (line[len - 1] == ' ')
        {
            cleaner(line, len);
        }
    }

    if (max > 0) /* there was a line */
    {
        printf("The length of the longest line is %d", max);
    }

    return 0;
}
/* my_getline: read a line into s, return length */
int my_getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

void printer(char line[])
{
    int i = 0;
    while (line[i] != '\0')
    {
        printf("%c", line[i]);
        i++;
    }
}

void cleaner(char line[], int length)
{
    int j = length - 1;
    while (line[j] == ' ')
        j--;
    line[j+1] = '\0' ;

    for(int i=0 ; line[i] != '\0' ; i++){
        printf("%c", line[i]);
    }

    printf("\n");
}