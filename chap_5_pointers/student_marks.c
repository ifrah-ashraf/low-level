#include<stdio.h>
#include<stdlib.h>

int total_marks(int *ptr, int n){
    int sum = 0 ;
    int* start = ptr ;
    while(start < ptr+n){
        sum += *start ;
        start++ ;
    }

    return sum ;

}

int highest_marks(int *ptr, int n ){
    int maxMarks = 0 ;
    int* start = ptr ;

    while(start < ptr + n){
        if(*start > maxMarks){
            maxMarks = *start ;
        }
        start++ ;
    }
    return maxMarks ;

}

int lowest_marks(int *ptr , int n ){
    int lowMarks = 100 ;
    int * start = ptr ;
    while(start < ptr + n){
        if(*start < lowMarks){
            lowMarks = *start ;
        }
        start++ ;
    }

    return lowMarks ;
}

void grace_marks(int *ptr, int n){
    int *start = ptr ;
    while(start < ptr + n){
        *start += 5 ;
        start++ ;
    }
}

void swap_marks(int *pos1 , int *pos2){
    int temp = *pos1 ;
    *pos1 = *pos2 ;
    *pos2 = temp ;
}

int main(){
    int n ;
    printf("Enter the total number of students\n");
    scanf("%d",&n);

    int* ptr = malloc(n * sizeof *ptr);

    int* start = ptr ;
    printf("Enter marks:\n");
    while(start < ptr + n){
        scanf("%d", start);
        start++ ;
    }
    start = ptr ;

    int totalMarks = total_marks(start,n);
    printf("Total Marks: %d\n",totalMarks);
    printf("Average marks: %d\n", totalMarks/n);
    printf("Highest Marks: %d\n", highest_marks(start,n));
    printf("Lowest Marks: %d\n", lowest_marks(start,n));

    printf("After adding grace marks:\n");
    grace_marks(start,n);
    while(start < ptr+n) {
        printf("%d\t", *start);
        start++ ;
    }
    start = ptr ;


    return 0 ;
}