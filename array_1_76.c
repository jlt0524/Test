#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, index, find, ans;
    int input_id, input_code;
    char str[20];
    scanf("%d", &n);

    int id[6] = {123, 456, 789, 336, 775, 566};
    int code[6] = {456, 789, 888, 558, 666, 221};
    int mon[6] = {9000, 5000, 6000, 10000, 12000, 7000};

    for(int i=0; i<n; i++)
    {
        index = -1;
        scanf("%d", &input_id);
        for(int j=0; j<6; j++)
        {
            if(input_id == id[j])
            {
                index = j;
                break;
            }
        }
        scanf("%d", &input_code);
        if(input_code != code[index] || index == -1)
            printf("error\n");
        else
            printf("%d\n", mon[index]);
    }
}


