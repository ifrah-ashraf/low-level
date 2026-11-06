#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // lmao take the input using user input
    int n ;
    printf("How many integer you want to store\n");
    scanf("%d", &n);

    int* ptr = malloc(n*sizeof(int));

    if(ptr != NULL){
        printf("memory allocated for %d integers\n", n);
    }

    int* start = ptr ;
    printf("Enter the numbers\n");

    while(start < ptr + n){
        scanf("%d", start);
        start++ ;
    }
    
    start = ptr ;
    while(start < ptr+n){
        printf("%d\t", *start) ;
        start++ ;
    }

    free(ptr);
    ptr = NULL ;

    return 0;
}