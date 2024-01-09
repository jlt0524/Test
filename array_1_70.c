#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    n = n%12;

    if(n==4)
        printf("rat\n");
    else if(n==5)
        printf("ox\n");
    else if(n==6)
        printf("tiger\n");
    else if(n==7)
        printf("rabbit\n");
    else if(n==8)
        printf("dragon\n");
    else if(n==9)
        printf("snake\n");
    else if(n==10)
        printf("horse\n");
    else if(n==11)
        printf("goat\n");
    else if(n==12)
        printf("monkey\n");
    else if(n==1)
        printf("rooster\n");
    else if(n==2)
        printf("dog\n");
    else if(n==3)
        printf("pig\n");

    if(n<=6)
        n+=6;
    else
        n-=6;

    if(n==4)
        printf("rat\n");
    else if(n==5)
        printf("ox\n");
    else if(n==6)
        printf("tiger\n");
    else if(n==7)
        printf("rabbit\n");
    else if(n==8)
        printf("dragon\n");
    else if(n==9)
        printf("snake\n");
    else if(n==10)
        printf("horse\n");
    else if(n==11)
        printf("goat\n");
    else if(n==12)
        printf("monkey\n");
    else if(n==1)
        printf("rooster\n");
    else if(n==2)
        printf("dog\n");
    else if(n==3)
        printf("pig\n");
}

