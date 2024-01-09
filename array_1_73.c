#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, k;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &k);

        int a=0, b=1;
        if(k==1)
            printf("1");
        else
            printf("1 ");
        for(int j=0; j<k-1; j++)
        {
            int tmp = a + b;
            a = b;
            b = tmp;
            printf("%d", tmp);
            if(j!=k-2)
                printf(" ");
        }
        printf("\n");
    }
}

