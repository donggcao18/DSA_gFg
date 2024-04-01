#include <stdio.h>

int i=1;
//print 1 to n
void print_1_to_n (int n)
{
    if (n> 0)
    {
        print_1_to_n(n-1);
        printf ("%d", n);
    }
    return;
}
int main ()
{
    int n;
    scanf ("%d ", &n);
    print_1_to_n(n);
    return 0;
}