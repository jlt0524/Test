#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[3];
    int ans=0;

    for(int i=0; i<5; i++)
    {
        scanf("%s", &s);
        if(strcmp(s,"10")==0)
            ans+=10;
        else if(strcmp(s,"K")==0)
            ans+=13;
        else if(strcmp(s,"Q")==0)
            ans+=12;
        else if(strcmp(s,"J")==0)
            ans+=11;
        else if(strcmp(s,"A")==0)
            ans+=14;
        else
            ans += s[0] - '0';
    }
    printf("%d\n", ans);
}

