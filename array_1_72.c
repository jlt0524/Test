#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, a, b, ans;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        ans = a*250 + b*175;
        printf("%d\n", ans);
    }
}

