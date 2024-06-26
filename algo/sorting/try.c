#include <stdio.h>
int binarySearch(int a[], int item, 
                 int low, int high)
{
    if (high <= low)
        return (item > a[low]) ? 
                (low + 1) : low;
 
    int mid = (low + high) / 2;
 
    if (item == a[mid])
        return mid + 1;
 
    if (item > a[mid])
        return binarySearch(a, item, 
                            mid + 1, high);
    return binarySearch(a, item, low, 
                        mid - 1);
}

int main ()
{
    int a[] = {1,2,3,4,6,7,8};
    int key = binarySearch (a, 5, 0, 6);
    printf ("%d ", key);
    return 0;
}