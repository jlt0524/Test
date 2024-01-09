#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n[10], max, min;

    for(int i=0; i<10; i++)
    {
        scanf("%f", &n[i]);
        if(i==0)
        {
            max = n[i];
            min = n[i];
        }
        if(n[i]>max)
            max = n[i];
        if(n[i]<min)
            min = n[i];
    }

    printf("maximum:%.2f\nminimum:%.2f\n", max, min);
}

