#include <limits.h>
#include <stdio.h>
#include <math.h>

void byte_sizes();
void using_limits();
void calculate_range();

int main(void)
{

    calculate_range();
    printf("\n");

    return 0;
}

void using_limits()
{
    printf("CHAR_BIT  = %d\n", CHAR_BIT);
    printf("CHAR_MIN   = %d\n", CHAR_MIN);
    printf("CHAR_MAX   = %d\n", CHAR_MAX);
    printf("UNSIGNED CHAR MAX   = %d\n", UCHAR_MAX);

    printf("SHRT_MIN   = %d\n", SHRT_MIN);
    printf("SHRT_MAX   = %d\n", SHRT_MAX);

    printf("INT_MIN    = %d\n", INT_MIN);
    printf("INT_MAX    = %d\n", INT_MAX);

    printf("LONG_MIN   = %ld\n", LONG_MIN);
    printf("LONG_MAX   = %ld\n", LONG_MAX);
}

void byte_sizes()
{
    printf("char      = %zu bytes\n", sizeof(char));
    printf("short     = %zu bytes\n", sizeof(short));
    printf("int       = %zu bytes\n", sizeof(int));
    printf("long      = %zu bytes\n", sizeof(long));
    printf("long long = %zu bytes\n", sizeof(long long));
}

void calculate_range()
{
    // here i am calculating the range for char
    // using pow(base , exp)
    int char_min = pow(2,7)* -1;
    printf("char min is %d\n", char_min);
}