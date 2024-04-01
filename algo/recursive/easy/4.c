#include <stdio.h>
#include <stdlib.h>
// ind sum of an array

int find_sum (int arr[], int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return arr[n-1] + find_sum(arr, n-1);
    }
}

int main ()
{
    int arr[] = {2,3,4};
    int n;
    n = sizeof (arr)/ sizeof (arr[0]);

    printf ("%d", find_sum (arr, n));
    return 0;
}