#include <stdio.h>

int main()
{
float a[10], sum, min_diff, min;
int i;
printf("please enter 10 numbers:\n");

for (i = 0; i < 10; i++)
{
    scanf("%f", &a[i]);
    sum += a[i];
}

sum = sum/10;

for (i = 0; i < 10; i++)
{
    if (i==0)
    {
        min_diff = sum-a[i];
    }
    float flag;
    flag = sum - a[i];
    if (flag < 0)
    {
        flag = flag * (-1);
    }

    if (flag < min_diff)
    {
        min_diff = flag;
        min = a[i];
    }
}

printf ("%.4f", min);

return 0;
}