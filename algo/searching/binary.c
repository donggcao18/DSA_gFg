#include <stdio.h>
int binary (int arr[], int key, int l, int h)
{
    while ( l <= h)
    {
        int m = (l+h) / 2;

        if (arr[m] > key)
        {
            h = m - 1;
        }
        if (arr[m] == key)
        {
            return m;
        }
        else
        {
            l = m+1;
        }

    }
    return -1;
}
int main ()
{
    
    int arr[] = {1,5,4,6,67,54,64,32};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    // Function call
    int key = binary (arr, 6, 0, 7);
    printf ("%d", key);

    return 0;

}