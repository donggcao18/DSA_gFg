#include <stdio.h>
// print the pyramid using recusive function

void print_space (int n)
{
    if (n==0)
    {
        return;
    }
    printf (" ");
    print_space (n-1);
}

void print_asterisk (int n)
{
    if (n==0)
    {
        return;
    }
    printf ("* ");
    print_asterisk (n-1);
}

void print_pyramid (int n, int number)
{
    if (n==0)
    {
        return;
    }

    print_space (n-1);
    print_asterisk (number-n+1);
    
    printf ("\n");
    print_pyramid (n-1, number);
       //lretun 0; 
    //peunt thww pyramid in a didference way to demonstrae the way 
}
int main ()
{
    int n = 5;
    print_pyramid (n,n);
    return 0;
}