#include <stdio.h>
#include <stdlib.h>

int soduku[10][10];
int markR[10][10] = {0};
int markC[10][10] = {0};
int mark3[3][3][10] = {0};
int n=0;

int check (int r, int c, int k)
{
    if (markR[r][k] == 1) return 0;
    if (markC[c][k] == 1) return 0;
    if (mark3[r/3][c/3][k] == 1) return 0;

    return 1;
}

void solution (int r, int c)
{
    if (r==10 && c==10)
    {
        n++;
        return;
    }
    if (r==11 || c==11)
    {
        return;
    }
    if (soduku[r][c] != 0) 
    {
        solution (r+1, c);
        solution (r, c+1);
    }
    else
    {
        int v;
        for (v=1; v<=9; v++)
        {
            if (check(r,c,v) == 1)
            {
                markR[r][v] = 1;
                markC[c][v] = 1;
                mark3[r/3][c/3][v] = 1;
                solution (r+1, c);
                solution (r, c+1);
            }
        }
        markR[r][v] = 0;
        markC[c][v] = 0;
        mark3[r/3][c/3][v] = 0;
    }

}

int main()
{
    int i, j;
    for (i=1;i<=9; i++)
    {
        for (j=1; j<=9; j++)
        {
            scanf ("%d", &soduku[i][j]);
            if (soduku[i][j]!= 0)
            {
                markR[i][soduku[i][j]] = 1;
                markC[j][soduku[i][j]] = 1;
                mark3[i/3][j/3][soduku[i][j]] = 1;
            }
        }
    }

    solution (1,1);

    printf ("%d", n);
    return 0;
}