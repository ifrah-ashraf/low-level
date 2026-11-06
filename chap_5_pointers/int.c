#include<stdio.h>

int rec(int x){
    return rec(x);
}

int main(){
    int x = 10 ;
    rec(x);

    return 0;
}