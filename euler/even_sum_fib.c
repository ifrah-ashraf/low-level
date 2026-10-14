#include<stdio.h>

int fib(int n, int sum);

int main(){
    int n ;

    printf("Enter the value\n");
    scanf("%d", &n);
    int res = fib(n, 0);
    printf("The result for fib of %d is %d\n",n, res );

    return 0 ;
}

// this function is incomplete i have to calculate the even sum of fibonacci series
int fib(int n ,int sum){
    if(n == 1) return 1 ;
    if(n == 2) return 2 ;

    int res = fib(n-1,sum)+fib(n-2, sum) ;
    if(res % 2 == 0) {
        sum += res ;
    }

    return sum ;
}