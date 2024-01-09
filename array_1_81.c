#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[3][3], m1=0, m2=0, m3=0, ans;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(j!=2)
                scanf("%d,", &a[i][j]);
            else
                scanf("%d", &a[i][j]);
            if(a[i][j]>m3)
            {
                m1 = m2;
                m2 = m3;
                m3 = a[i][j];
            }
            else if(a[i][j]>m2)
            {
                m1 = m2;
                m2 = a[i][j];
            }
            else if(a[i][j]>m1)
                m1 = a[i][j];
        }
    }
    ans = m1 + m2 + m3;
    printf("%d\n", ans);
}


