#include<stdio.h>

#define ALLOCSIZE 100

static char allocbuf[ALLOCSIZE] ;
static char* allocp = allocbuf ;

char *alloc(int n){
    // this function main purpose is to check whether there is memory available or not
    if(allocbuf + ALLOCSIZE - allocp >= n){
        allocp += n ;
        return allocp - n ;
    }else{
        printf("Memory exhausted release some memory\n");
    }

    return NULL ;
}

void afree(char *p){
    // this function basically set the alloc pointer to the start of p 
    if(p >= allocbuf && p < allocbuf + ALLOCSIZE){
        allocp = p ; 
    }
}

int main(){
    char *ptr1 = alloc(10);
    char *ptr2 = alloc(30);
    char *ptr3 = alloc(40);
    char *ptr4 = alloc(30);

    printf("The memory of pointer 1 starts from %p and ends at %p\n", ptr1 , ptr2);
    printf("The memory of pointer 2 starts from %p and ends at %p\n", ptr2 , ptr3);
    printf("The memory of pointer 3 starts from %p and ends at %p\n", ptr3 , ptr4);

    printf("\nreleasing memory\n");
    afree(ptr3);
    printf("\nNow the vacant memory we have after release is %ld\n", allocbuf + ALLOCSIZE - allocp);
    ptr4 = alloc(30);
    printf("The memory of pointer 4 starts from %p and ends at %p\n", ptr2 , ptr4);

    printf("End of program\n");

    return 0 ;
}