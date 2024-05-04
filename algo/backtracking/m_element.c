// Generating all m-element subsets from n-element set
#include <stdio.h>
int a[100];
void printSolution(int m)
{
    int i;
    for (i=1; i<=m; i++)
    {
        printf ("%d", a[i]);
    }
    printf ("\n");
}

void subset (int k, int n, int m)
{
    int i;
    for (i=k; i<=n-m+k;i++)
    {
        if(k==m+1)
        {
            printSolution(m);
            return;
        }
        a[k] = i;
        if (a[k] > a[k-1])
        {
            subset(k+1, n, m);
        }

    }
}
int main ()
{
    int n, m;
    scanf ("%d %d", &n, &m);
    subset(1, n, m);

    return 0;
}