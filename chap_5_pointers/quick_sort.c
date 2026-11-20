#include <stdio.h>

void swap(int *left, int *right)
{
    int temp = *left;
    *left = *right;
    *right = temp;
}

int *partition_arr(int *left, int *right)
{
    // never use the given pointer
    int pivot  = *left;
    int* i = left + 1 ;
    int* j = right ;

    while(1){
        while(i <= right && *i <= pivot) i++ ;
        while(j > left && *j > pivot) j-- ;

        if(i >= j) break ;

        swap(i,j);
        i++ ;
        j-- ;
    }
    swap(left,  j);
    return j ;
}

void quick_sort(int* left , int* right){
    if(left < right){
        int* j = partition_arr(left,right);
        quick_sort(left,j);
        quick_sort(j+1,right);
    }
}

void print_arr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
// i have to write a function that takes the middle element as pivot
// make swapping around it and perform the sorting algorithm wisely
void partition_arr_middle(int arr[], int left, int right) {

    int mid = left + (right - left) / 2;
    int pivot = arr[mid];

    printf("The pivot element is  %d\n",pivot);

    int i = left;
    int j = right;

    while (i <= j) {

        // Find an element greater than or equal to pivot
        while (arr[i] < pivot) {
            i++;
        }

        // Find an element smaller than or equal to pivot
        while (arr[j] > pivot) {
            j--;
        }

        // Swap misplaced elements
        if (i <= j) {
            swap(&arr[i], &arr[j]);

            i++;
            j--;
        }
    }

    // Print the partitioned array
    print_arr(arr, right + 1);
}

int main(void)
{
    int arr[7] = {10, 34, 58, 25, 26, 8, 11};

    printf("Array before partition\n");
    print_arr(arr,7);

    printf("Array after partition\n");
    partition_arr_middle(arr,0,6);

    
    //print_arr(arr,7);
   
    return 0;
}