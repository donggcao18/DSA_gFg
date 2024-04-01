#include <stdio.h>
// tail-end recursion to calculate sum of an array

int sum(int arr[], int size, int summ)
{
    if (size == 0)
    {
        return summ;
    }
    else
    {
        return sum(arr, size-1, summ+arr[size-1]);
    }
}

int main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int summ=0;
    printf ("%d", sum(arr, n, summ));

    return 0;
}