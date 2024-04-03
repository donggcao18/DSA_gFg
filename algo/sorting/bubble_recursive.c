#include <stdio.h>

void swap (int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void first_sort (int arr[], int index, int n)
{
    if (index == n-1)
    {
        return;
    }
    if (arr[index] >arr [index+1])
    {
        swap (&arr[index], &arr[index+1]);
    }
    first_sort (arr,index+1,n);
}

void final (int arr[], int index, int n)
{
    if (n == 1)
    {
        return;
    }
    first_sort (arr, index, n);
    final (arr, index, n-1);
}
int main ()
{
    int arr[] = {1,5,2,4,9,3};
    int n = sizeof (arr) / sizeof (arr[0]);
    int index = 0;
    final (arr, index, n);
    int i;
    for (i=0; i<n; i++)
    {
        printf ("%d\n", arr[i]);
    }

    return 0;   
}