#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n, ans;
    int gender;

    while(scanf("%f %d", &n, &gender)!=EOF)
    {
        if(gender==1)
            ans = (n-80)*0.7;
        else
            ans = (n-70)*0.6;
        printf("%.1f\n", ans);
    }
}

