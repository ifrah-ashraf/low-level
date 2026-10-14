#include <stdio.h>

#define MAX_RANGE 1000;

int sum_of_multiples(int n);

int main()
{
    int res = sum_of_multiples(3)+sum_of_multiples(5)-sum_of_multiples(15);
    printf("result is %d", res);

    return 0;
}

int sum_of_multiples(int n)
{
    int num = n;
    int sum = 0;
    while (num < 1000)
    {
        sum += num;
        num += n;
    }

    return sum;
}
