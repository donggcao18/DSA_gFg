#include <stdio.h>
#include <stdbool.h> 
#include <string.h>
//check whether a string is palimore string 

bool palimore (char str[], int begin, int end)
{
    if (begin == end)
    {
        return true;
    }

    if (str[begin] != str[end])
    {
        return false;
    }

    if (begin < end)
    {
        return palimore (str, begin+1, end-1);
    }

    return true;

}
int main ()
{
    char str[] = "mallam";
    int begin = 0;
    int end = strlen(str)-1;

    if(palimore (str, begin, end))
    {
        printf ("Yes");
    }
    else
        printf ("No");

    return 0;
}