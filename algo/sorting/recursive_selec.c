#include <stdio.h>
void swap (int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int min_index (int arr[], int start, int end)
{
    if (start == end)
    {
        return start;
    }

    int k = min_index (arr, start+1, end);
    return arr[start] > arr[k] ? k : start;
}

void selection (int arr[], int start, int end)
{
    int k = min_index (arr, start, end);
    if (start == end)
    {
        return;
    }
    if (k != start)
    {
        swap (&arr[start], &arr[k]);
    }
    selection (arr, start+1, end);

}

int main ()
{
    int arr[] = {1,2,3,4,5,0};
    int n = sizeof (arr) / sizeof (arr[0]);
    int start = 0;
    selection (arr, start, n);

    for (start = 0; start < n; start++)
    {
        printf ("%d\n", arr[start]);
    }

    return 0;
}