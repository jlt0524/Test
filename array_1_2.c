#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a[6];
    for(int i=0; i<6; i++)
        scanf("%d", &a[i]);
    for(int i=5; i>=0; i--)
    {
        printf("%d", a[i]);
        if(i>0)
            printf(" ");
    }
    printf("\n");

}
