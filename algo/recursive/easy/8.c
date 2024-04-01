#include <stdio.h>
// fibonacci
int fibonacci (int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci (n-2) + fibonacci (n-3);
    }
}

int main()
{
    int n;
    scanf ("%d", &n);

    printf ("%d", fibonacci (n));
    return 0;
}