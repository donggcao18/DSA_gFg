#include <stdio.h>
 
// print reverse of the string
void reverse (char str[], int n)
{
    if (n==0)
    {
        return;
    }
    printf ("%c", str[n-1]);
    return reverse (str, n-1);
}

int main()
{
    char str[] = "i dont know";
    int n = strlen (str);

    reverse (str, n);
    return 0;
}