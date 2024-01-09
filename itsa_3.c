#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, dis;

    while(scanf("%f %f", &x, &y) != EOF)
    {
        dis = sqrt( pow(x, 2) + pow(y, 2) );
        if(dis > 100)
            printf("outside\n");
        else
            printf("inside\n");
    }
}
