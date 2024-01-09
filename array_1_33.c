#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;

    scanf("%d %d", &row, &col);
    int a[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            scanf("%d", &a[i][j]);
    }
    int b[col][row];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            b[j][i] = a[i][j];
    }

    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            printf("%d", b[i][j]);
            if(j<row-1)
                printf(" ");
        }
        printf("\n");
    }
}
