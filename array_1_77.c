#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col], counter=1;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            a[i][j]=counter;
            counter++;
        }
    }

    int b[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            b[i][j]=a[row-i-1][col-j-1];
            printf("%d", b[i][j]);
            if(j!=col-1)
                printf(" ");
        }
        printf("\n");
    }
}


