#include<stdio.h>
int main()
{
    int n,i,j,k = 0,sum,flag;
    int friends[10000];
    char num[10000][4];

    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        sum = 0;
        flag = 1;
        scanf("%s",num[i]);
        for(j = 0; num[i][j] != '\0'; j++)
        {
            sum += num[i][j] - '0';
        }
        if(i == 0)
        {
            friends[0] = sum;
            k++;
        }
        else
        {
            for(j = 0; j < k; j++)
            {
                if(sum == friends[j])
                    flag = 0;
            }
            if(flag)
            {
                friends[k] = sum;
                k++;
            }
        }
    }
    for(i = k-1; i > 0; i--)
        for(j = 0; j < i; j++)
        {
            int tmp;
            if(friends[j] > friends[j+1])
            {
                tmp = friends[j];
                friends[j] = friends[j+1];
                friends[j+1] = tmp; 
            }
        }
    printf("%d\n",k);
    for(i = 0; i < k; i++)
    {
        if(i != k-1)
            printf("%d ",friends[i]);
        else 
            printf("%d\n",friends[i]);

    }
       

    return 0;
}