#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a[4], check[6] = {0}, same[6] = {0}, valid = 0, max = 0, ans = 0;

    for(int i=0; i<4; i++)
    {
        scanf("%d", &a[i]);
        check[a[i]-1]++;

        if(check[a[i]-1]==2)
            same[a[i]-1] = 1;

        if(check[a[i]-1]>2)
            same[a[i]-1] = 0;
    }

    int pair = 0;

    for(int i=0; i<6; i++)
    {
        if(same[i]==1)
        {
            valid++;
            if(i+1>pair)
                pair = i+1;
        }
    }

    if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
        printf("WIN\n");
    else
    {
        if(valid == 1)  //one pair
        {
            for(int i=0; i<6; i++)
            {
                if(i+1!=pair && check[i]!=0)
                    ans += i+1;
            }
            printf("%d\n", ans);

        }
        else if(valid == 2)  //two pair
            printf("%d\n", pair*2);
        else
            printf("R\n");
    }
}

