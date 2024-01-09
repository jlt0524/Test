#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, m1, m2, m3;
    scanf("%d,%d,%d,%d", &n, &m1, &m2, &m3);

    n = n - m1*15 - m2*20 - m3*30;

    if(n<0)
        printf("0\n");
    else
    {
        int c1=0, c2=0, c3=0;   //50,5,1
        while(n>=50)
        {
            n -= 50;
            c1++;
        }
        while(n>=5)
        {
            n -= 5;
            c2++;
        }
        /*while(n>0)
        {
            n -= 1;
            c3++;
        }*/
        printf("%d,%d,%d\n", n, c2, c1);
    }
}




