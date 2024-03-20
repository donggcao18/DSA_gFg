#include <stdio.h>
#include <string.h>

int main ()
{
    char str[100][100];
    
    int number, i;
    scanf("%d", &number);

    for (i=0; i<=number; i++)
    {
        fgets (str[i], 100, stdin);
    }

    for (i=0; i<=number; i++)
    {
        printf ("%s", str[i]);
    }

    
    return 0;
}