// generating permutation of n-element seqence
#include <stdio.h>
int a[100];

void printSolution(int m)
{
    int i;
    for (i=1; i<=m; i++)
    {
        printf ("%d ", a[i]);
    }
    printf ("\n");
}

int check (int k)
{
    int i;
    for (i=1; i<k; i++)
    {
        if (a[i] == a[k])
            return 0;
    }
    return 1;

}
void permutation (int k, int n)
{
    if (k==n+1)
        {
            printSolution(n);
            return;
        }
    int i;
    for (i=1; i<=n; i++)
    {
        
        a[k] = i;
        if (check(k))
        {
            permutation (k+1, n);
        }
    }
}

int main ()
{
    int n;
    scanf ("%d", &n);

    permutation (1, n);

    return 0;

}