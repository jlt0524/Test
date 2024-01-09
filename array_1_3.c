#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a[6], ans = 0;

    for(int i=0; i<6; i++)
    {
        scanf("%d", &a[i]);
        ans += pow(a[i], 3);
    }
    printf("%d\n", ans);
}
