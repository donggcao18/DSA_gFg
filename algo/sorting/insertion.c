#include <stdio.h>
void swap (int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void insertion (int arr[], int n)
{
    int i, j;
    for (i = 1; i <n; i++)
    {
        int key = i;
        while (arr[key] < arr[key-1] && j>=0)
        {
            swap (&arr[key], &arr[key-1]);
            key--;
        }
    }
}
int main ()
{
    int arr[] = {1,7,5,6,4,9,10,25,21};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion (arr, n);

    int i;
    for (i=0; i<n; i++)
    {
        printf ("%d\n", arr[i]);
    }
    return 0;
}