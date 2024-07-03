#include <stdio.h>
int arr[100];
int n;

int check_candidate (int k, int number)
{
    int i;
    for (i=0; i<k;i++)
    {
        if (arr[i] == number) return 0;
    }
    return 1;
}

void print ()
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
}

void try (int k)
{
    if (k==n) 
    {
        print ();
        return;
    }
    int i;
    for (i=1; i<=n; i++)
    {
        arr[k] = i;
        if (check_candidate (k, arr[k]))
            try (k+1);
    }
}
int main ()
{
    scanf ("%d", &n);
    try (0);
    return 0;
}