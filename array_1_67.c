#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n[6], ans[6][6];
    for(int i=0; i<6; i++)
        scanf("%d", &n[i]);

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            ans[i][j] = n[i]*n[j];
            if(ans[i][j]<10)
                printf("00%d", ans[i][j]);
            else if(ans[i][j]<100)
                printf("0%d", ans[i][j]);
            else
                printf("%d", ans[i][j]);
            if(j!=5)
                printf(" ");
        }
        printf("\n");
    }
}

