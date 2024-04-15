#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("%d\n", arr[i]);
    }
}

void merge (int arr[], int l, int m, int h)
{
    int n1 = m-l+1;
    int n2 = h-m;
    int* L = (int*) malloc (n1 * sizeof (int));
    int* N = (int*) malloc (n2 * sizeof (int));

    int i,j=0;
    for (i=l; i<= m; i++)
    {
        L[j] = arr[i];
        j++;
    }
    j=0;
    for (i=m+1; i<= h; i++)
    {
        N[j] = arr[i];
        j++;
    }

    i=0, j=0;
    int k = l;
    while (i<n1 && j<n2)
    {
        if (L[i] < N[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = N[j];
            j++;
        }
        k++;
    }

    if (i == n1)
    {
        while (j< n2)
        {
            arr[k] = N[j];
            k++;
            j++;
        }
        return;
    }

    if (j == n2)
    {
        while (i < n1)
        {
            arr[k] = L[i];
            k++;
            i++;
        }
    }

}

void mergeSort (int arr[], int l, int h)
{
    int m = (l + h) / 2;
    if (l<m)
    {
    mergeSort (arr, l, m);
    mergeSort (arr, m+1, h);

    merge (arr, l, m, h);
    }
}

int main ()
{
    int arr[] = {1,4,3,5,9,12,42,11,24,45};
    int n = sizeof (arr) / sizeof (arr[0]);

    mergeSort (arr, 0, n-1);
    printArray (arr, n);
    return 0;
}