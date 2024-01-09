#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, ans;

    while(scanf("%f", &n) != EOF)
    {
        ans = n*(1.6);
        printf("%.1f\n", ans);
    }
}
