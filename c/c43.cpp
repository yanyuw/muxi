#include<stdio.h>
int main()
{
    int m,n,a,b,t,i,j;
    int photo[500][500];

    scanf("%d%d%d%d%d",&m,&n,&a,&b,&t);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&photo[i][j]);
            if(photo[i][j] >= a && photo[i][j] <= b)
            {
                photo[i][j] = t;
            }
        }
    }
    
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j == n-1)
            {
                printf("%03d\n",photo[i][j]);
            }
            else
            {
                printf("%03d ",photo[i][j]);
            }
        }
    }
    return 0;
}
