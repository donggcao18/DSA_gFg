#include <stdio.h>
#include <string.h>
int main ()
{
    char str[1000];
    fgets (str, 1000, stdin);
    int n = strlen (str);
    int i;
    int flag =0;
    for (i=0; i<n; i++)
    {
        if (str[i] == ' ')
        {
            flag = 1;
        }
        else if (str[i] != ' ')
        {
            if (flag == 1)
        {
            printf ("\n");
            printf ("%c", str[i]);
            flag = 0;
            
        }
        else 
        {
            printf("%c", str[i]);
        }

        }
    }
    return 0;
}