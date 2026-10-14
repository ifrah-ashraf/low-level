#include <stdio.h>

int search(int arr[], size_t length, int elem);

int main()
{
    int arr[] = {1, 3, 5, 10, 15, 18};

    int ind = search(arr, sizeof(arr) / sizeof(arr[0]), 15);

    if (ind == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at index %d\n", ind);
    }

    return 0;
}

int search(int arr[], size_t length, int elem)
{
    // here i have to return the index of the elem
    int low = 0;
    int high = (int)length - 1;
    int mid = (low + high) / 2;
    int ind = -1;

    while (low <= high)
    {
        if (arr[mid] == elem)
        {
            ind = mid;
            return ind;
        }
        else if (arr[mid] > elem)
            high = mid - 1;
        else
            low = mid + 1;

        mid = (low+high) / 2 ;
    }

    return ind;
}