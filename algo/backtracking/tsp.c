#include <stdio.h>
#include <stdlib.h>

int fopt = 10000;
int f=0;
int g=0;
int x[5];
int visited[5] = {0};

int find_c_min (int c[5][5])
{
    int i, j;
    int min = c[0][1];
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if (i==j)
            {
                continue;
            }

            if(c[i][j] < min)
            {
                min = c[i][j];
            }
        }
    }

    return min;
}


void TSP(int k, int c_min, int c[5][5])
{
    int i;

    for (i = 1; i < 5; i++)
    {
        if (visited[i] == 0)
        {
        
            visited[i] = 1; // mảk that this city is visited once
            x[k] = i;
            f += c[x[k-1]][x[k]];
            g = f + c_min * (5 - k);
            if (k == 4)
            {
                f += c[x[k-1]][0];
                if (f < fopt)
                {
                    fopt = f;
                }
                f-= c[x[k-1]][0];
            }
            if (g < fopt)
            { 
                TSP(k + 1, c_min, c);
            }
            f -= c[x[k-1]][x[k]]; 
            visited[i] = 0; // Unmark the visited city for backtracking
        
    
        }
    }
}


int main ()
{
    int c[5][5] = {{0,3,14,18,15},
                    {3,0,4,22,20},
                    {17,9,0,16,4},
                    {9,20,7,0,18},
                    {9,15,11,5,0}};
    int c_min ;
    c_min = find_c_min (c);

    x[0] = 0;
    TSP(1, c_min, c);
    printf ("%d", fopt);

    return 0;
}