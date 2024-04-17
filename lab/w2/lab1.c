#include <stdio.h>
#include <math.h>

void perfect_square(int n)
{
    int flag = 0;
    while (n >0)
    {
        int number, i;
        scanf ("%d", &number);
        for (i=0; i<= sqrt(number);i++)
        {
            if (i*i == number )
            {
                flag++;
            }
        }
        n--;
    }

    printf ("%d", flag);
}

int main ()
{
    int n;
    scanf ("%d", &n);
    perfect_square (n);

    return 0;
}