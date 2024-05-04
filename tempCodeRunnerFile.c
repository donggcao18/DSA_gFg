// generate all binary string of length n
#include <stdio.h>
#include <stdlib.h>
int a[100];

void printString(int n)
{
    int i;
    for (i=1; i<=n; i++)
    {
        printf ("%d", a[i]);
    }
}
void binaryString(int k, int n)
{
    int i;
    for (i=0; i<=1; i++)
    {
        a[k] = i;
    if (k==n+1)
    {
        printString(n);
        printf("\n");
        return;
    }
    binaryString(k+1, n);
    }
}
int main ()
{
    int n;
    scanf ("%d", &n);

    binaryString(1,n);

    return 0;
}