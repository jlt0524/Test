#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);
    float a[n], b[n], c[n], at = 0, bt = 0, ct = 0, t = 0;

    for(int i=0; i<n; i++)
    {
        scanf("%f %f %f", &a[i], &b[i], &c[i]);
        at += a[i];
        bt += b[i];
        ct += c[i];
        t = t + (a[i] + b[i] + c[i]);
    }
    printf("%.1f %.1f %.1f %.1f\n", t/(3*n), at/n, bt/n, ct/n);
}
