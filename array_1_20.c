#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, ans=1;
    scanf("%d", &n);
    int a[n], check[128]={0};

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        check[a[i]-1]++;
        if(check[a[i]-1]>1)
            ans=0;
    }
    printf("%d\n", ans);
}
