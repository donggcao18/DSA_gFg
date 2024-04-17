#include <stdio.h>

void swap(int* p1, int* p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int partition (int arr[], int l, int h)
{
    int pivot = arr[h];
    int i, j = l;
    for (i=l; i<h; i++)
    {
        if (arr[i] < pivot)
        {
            swap (&arr[i], & arr[j]);
            j++;
        }
    }

    swap (&arr[j], &arr[h]);
    return j;
}

void quickSort (int arr[], int low, int high)
{
    if (low > high)
    {
        return;
    }
    int p = partition (arr, low, high);

    quickSort (arr, low, p-1);
    quickSort (arr, p+1, high);
    
}

int main ()
{
    int arr[] = {1,5,4,6,67,54,64,32};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    // Function call
    quickSort(arr, 0, n - 1);
  
  // Print the sorted array
    printf("Sorted Array\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}