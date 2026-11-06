
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXOP 100
#define MAXVAL 100
#define BUFSIZE 100
#define NUMBER '0'

/* Stack variables */
double val[MAXVAL];
int sp = 0;

/* Input buffer variables */
char buf[BUFSIZE];
int bufp = 0;

/* Function declarations */
int getop(char s[]);
void push(double f);
double pop(void);
int getch(void);
void ungetch(int c);

/* Main calculator loop */
int main(void)
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;

            case '+':
                push(pop() + pop());
                break;

            case '*':
                push(pop() * pop());
                break;

            case '-':
                op2 = pop();
                push(pop() - op2);
                break;

            case '/':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("error: zero divisor\n");
                break;

            case '\n':
                printf("\t%.8g\n", pop());
                break;

            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }

    return 0;
}

/* Push a value onto the stack */
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

/* Pop and return the top value */
double pop(void)
{
    if (sp > 0)
        return val[--sp];

    printf("error: stack empty\n");
    return 0.0;
}

/* Get the next operator or numeric operand */
int getop(char s[])
{
    int i = 0;
    int c;

    while ((c = getch()) == ' ' || c == '\t')
        ;

    s[0] = c;
    s[1] = '\0';

    if (c == EOF)
        return EOF;

    if (!isdigit(c) && c != '.' &&
        !(c == '-' && (isdigit(c = getch()) || c == '.'))) {
        return s[0];
    }

    if (s[0] == '-') {
        s[++i] = c;
    }

    if (isdigit(c)) {
        while (isdigit(s[++i] = c = getch()))
            ;
    }

    if (c == '.') {
        while (isdigit(s[++i] = c = getch()))
            ;
    }

    s[i] = '\0';

    if (c != EOF)
        ungetch(c);

    return NUMBER;
}

/* Get a character from the buffer or standard input */
int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

/* Push a character back into the input buffer */
void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = (char)c;
}
