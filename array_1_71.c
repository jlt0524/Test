#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, ans, check[4];//o, a, b
    char f[3], m[3], k[3];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        ans = 0;
        for(int j=0; j<4; j++)
            check[j]=0;

        scanf("%s %s %s", &f, &m, &k);
        if(strcmp(f,"O")==0)
            check[0]++;
        else if(strcmp(f,"A")==0)
            check[1]++;
        else if(strcmp(f,"B")==0)
            check[2]++;
        else
        {
            check[1]++;
            check[2]++;
            check[3]++;
        }

        if(strcmp(m,"O")==0)
            check[0]++;
        else if(strcmp(m,"A")==0)
            check[1]++;
        else if(strcmp(m,"B")==0)
            check[2]++;
        else
        {
            check[1]++;
            check[2]++;
            check[3]++;
        }

        if(strcmp(k,"O")==0 && check[3]==0)
            ans = 1;
        else if(strcmp(k,"A")==0 && check[1] !=0)
            ans = 1;
        else if(strcmp(k,"B")==0 && check[2] !=0)
            ans = 1;
        else if(strcmp(k,"AB")==0)
        {
            if(check[3] !=0 || (check[1] == 1 && check[2] == 1))
                ans = 1;
        }

        if(ans)
            printf("YES\n");
        else
            printf("IMPOSSIBLE\n");
    }
}

