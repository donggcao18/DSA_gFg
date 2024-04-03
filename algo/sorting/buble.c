#include <stdio.h>

void swap (int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble (int arr[], int n)
{
    int i, j;
    for (i=0; i<n-1; i++)
    {
        for (j=i; j<n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap (&arr[j], &arr[j+1]);
            }
        }
    }
}
int main ()
{
    int arr[] = {2,7,5,4,9,10,8};
    int n = sizeof (arr) / sizeof (arr[0]);

    bubble (arr, n);
    int i;
    for (i=0; i<n; i++)
    {
        printf ("%d\n", arr[i]);
    }
    return 0;
}