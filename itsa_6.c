#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    while(scanf("%d", &n) != EOF)
    {
        if(3<=n && n<=5)
            printf("Spring\n");
        else if(6<=n && n<=8)
            printf("Summer\n");
        else if(9<=n && n<=11)
            printf("Autumn\n");
        else
            printf("Winter\n");
    }
}
