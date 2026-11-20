#include<stdio.h>

int main(){
    int a1[] = {2,3,4,5};
    int b1[] = {10,20,30};
    int c1[] = {18,36,54,123,42};

    int* p[3] = {a1,b1,c1} ;

    int* ptr = p[2] ; 

    printf("%d\n", *(ptr+2));
    printf("%d\n", *(p[2]+2));

    return 0 ;

}