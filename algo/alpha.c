#include <stdio.h>
int main ()
{
    int arr[26] = {0};
    int i;

    
    for (i=0; i<100; i++)
    {
        char c;
        scanf ("%c", &c);
        if (c < 'a' || c > 'z') break;
        arr[c-97]++;
    }

    for (i=0; i<26; i++)
    {
        if (arr[i] != 0)
        {
            printf ("the letter %c appears %d times", i+97, arr[i]);
        }
    }
}