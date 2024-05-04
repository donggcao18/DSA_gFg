#include <stdio.h>

void print_m_element_subset (int n, int m)
{
    int a[100];
    int i;
    for (i=1; i<=m; i++)
    {
         a[i] = i;
    }

    int f = m;
    
    if (a[f] != n-m+f)
    {
        a[f] = a[f] + 1;
        int h;
        for (h=f+1; h<=m;h++)
        {
            a[h]=a[f]+h-f;
        }
        for (h=1; h<=m; h++)
        {
            printf ("%d", a[h]);
        }
    }
    else
        f--;
}

int main ()
{
    print_m_element_subset(6, 4);
    return 0;
}