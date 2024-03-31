#include <stdio.h>
void swap(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void selection (int arr[], int n)
{
    int flag;
    int i, j;

    for (i=0; i<n-1; i++)
    {
        flag = i;
        for (j=i+1; j<n; j++)
        {
            if (arr[j] < arr[flag])
            {
                flag = j;
            }
        }
        if(flag != i) 
            swap(&arr[i], &arr[flag]); 
        
    }
}
int main ()
{
    int arr[] = {2,7,34,76,12,13};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int i;

    selection (arr, n);

    for (i=0; i<n; i++)
    {
        printf ("%d ", arr[i]);
    }

    return 0;
}