#include<stdio.h>

// implement basic pointer concept

void double_val(int *x){
    *x = (*x)*2 ;
    printf("The value of x now becomes %d\n",*x);
}

void swap_val(int *a , int *b){
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}

// Print every array element using pointers
void printArray(int *arr, int size){
    int i = 0 ;
    while(i < size){
        printf("value at index %d is %d\n", i,*(arr +i)) ;
        i++ ;
    }
}

// Calculate sum using pointers
int calculateSum(int *arr, int size){
    int i = 0 ;
    int sum = 0 ;
    while(i < size){
        sum += *(arr + i);
        i++ ;
    }

    return sum ;
}

// Find maximum using pointers
int findMax(int *arr, int size){
    int i = 0 ;
    int max = *arr ;
    while(i < size){
        if(*(arr+i) > max){
            max = *(arr+i);
        }
        i++ ;
    }
    return max ;

}

// Multiply every element by 2 using pointers
void multiplyArray(int *arr, int size){
    int i = 0 ;
    while(i < size){
        *arr = *(arr+i)*2 ;
        i++ ;
    }
}

int main(){
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    printArray(&arr[0],10);

    int sum = calculateSum(&arr[0],10);
    printf("Total sum is %d\n",sum);

    int max = findMax(&arr[0],10);
    printf("The max element is %d\n", max);

    multiplyArray(&arr[0],10);

    return 0 ;
}