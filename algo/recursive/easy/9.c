#include <stdio.h>
// find min and max off an array
int find_min (int arr[], int n, int min)
{
    if (n==0)
    {
        return arr[0];
    }
    
}


int main()
{
    int arr[] = {1,2,3,4,0};
    int n = sizeof(arr)/ sizeof(arr[0]);

    printf ("%d ", find_min(arr, n));
    return 0;
}