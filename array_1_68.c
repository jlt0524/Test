#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int h, m;
    scanf("%d %d", &h, &m);

    if(h==23 || h==0)
        printf("rat\n");
    else if(h==1 || h==2)
        printf("ox\n");
    else if(h==3 || h==4)
        printf("tiger\n");
    else if(h==5 || h==6)
        printf("rabbit\n");
    else if(h==7 || h==8)
        printf("dragon\n");
    else if(h==9 || h==10)
        printf("snake\n");
    else if(h==11 || h==12)
        printf("horse\n");
    else if(h==13 || h==14)
        printf("goat\n");
    else if(h==15 || h==16)
        printf("monkey\n");
    else if(h==17 || h==18)
        printf("rooster\n");
    else if(h==19 || h==20)
        printf("dog\n");
    else if(h==21 || h==22)
        printf("pig\n");
}

