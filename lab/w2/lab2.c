#include <stdio.h>

int main ()
{
    int  a[10000], n, i, sum;
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
        sum+= a[i];
    }

    printf ("%d", sum);
    return 0;
}