#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, k, ans[8] = {0};

    while(scanf("%d", &n) != EOF)
    {
        if(n<0)
        {
            printf("1");
            k = 6;
            n = 128 + n;
        }
        else
            k=7;

        for(int i=k; i>=0; i--)
        {
            int m = pow(2, i);
            if(n>=m)
            {
                printf("1");
                n -= m;
            }
            else
                printf("0");
        }
        printf("\n");
    }



}
