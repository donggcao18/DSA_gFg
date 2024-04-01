#include <stdio.h>
// print n to 1
void print_n_to_1(int n)
{
    if (n>0)
    {
        printf("%d ", n);
        print_n_to_1(n-1);
    }

    return;
}

int main ()
{
    int n;
    scanf("%d", &n);
    print_n_to_1(n);

    return 0;
}