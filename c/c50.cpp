#include<stdio.h>
#include <stdlib.h>

int m,n,tol,count = 0,x,y;
long long color[1000][1000] = {0};

int isunique(int a, int b)
{
    int flag = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a == i && b == j)
                continue;
            if(color[a][b] == color[i][j])
                flag = 0;
        }
    }
    // printf("%d",flag);
    if(flag)
        return 1;
    else
        return 0;
}
int check(int a, int b)
{
    if(abs(color[a][b] - color[a-1][b-1]) <= tol)
    {
        return 0;
    }
    if(abs(color[a][b] - color[a-1][b]) <= tol)
    {
        return 0;
    }
    if(abs(color[a][b] - color[a-1][b+1]) <= tol)
    {
        return 0;
    }
    if(abs(color[a][b] - color[a][b-1]) <= tol)
    {
        return 0;
    }     
    if(abs(color[a][b] - color[a][b+1]) <= tol)
    {
        return 0;
    }   
    if(abs(color[a][b] - color[a+1][b-1]) <= tol)
    {
        return 0;
    }     
    if(abs(color[a][b] - color[a+1][b]) <= tol)
    {
        return 0;
    }           
    if(abs(color[a][b] - color[a+1][b+1]) <= tol)
     {
        return 0;
    }
    return 1;
}

int main()
{
    scanf("%d%d%d",&m,&n,&tol);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            scanf("%lld",&color[i][j]);
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(isunique(i,j) && check(i,j))
            {
                count++;
                x = j;
                y = i;
            }
        }
    }
    // printf("count=%d\n",count);
    if(count == 0)
        printf("Not Exist");
    else if(count > 1)
        printf("Not Unique");
    else if(count == 1)
        printf("(%d, %d): %lld",x,y,color[y][x]);
    return 0;
}
