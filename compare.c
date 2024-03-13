#include <stdio.h>

bool compare (int a[], int b [])
{
    if (sizeof(a[]) != sizeof (b[]))
    {
        return -1;
    }
    int n = sizeof (a[]);
    int i;
    for (i=0; i<n; i++)
    {
        int min= arr[i];
        for (j=i; j<n; j++)
        {
            if (arr[j] < min)
            {
                arr[i] = min;
                swap (arr[j], min)
            }
        }
    }
}

int main ()
{
    int a [10];
    int b [10];


    return 0;
}