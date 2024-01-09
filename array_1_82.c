#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, m;
    scanf("%d %d", &m, &n);
    float perc[m], stu[m], sum=0;
    for(int i=0; i<m; i++)
        scanf("%f", &perc[i]);


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%f", &stu[j]);
            sum += stu[j]*perc[j];
        }
    }
    printf("%.2f\n", sum/n);
}


