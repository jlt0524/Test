#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float a[2][2];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    float det = a[0][0]*a[1][1]-a[0][1]*a[1][0];
    int in_det = det;
    //printf("%d\n", in);

    float tmp = a[0][0];
    a[0][0] = a[1][1];
    a[1][1] = tmp;

    a[0][1] = -a[0][1];
    a[1][0] = -a[1][0];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            int in = a[i][j];
            //printf("in:%d  f:%f\n", in, a[i][j]);
            if(in%in_det == 0)
                printf("%.0f", a[i][j]/det);
            else
                printf("%.1f", a[i][j]/det);
            if(j!=1)
                printf(" ");
        }
        printf("\n");
    }
}



