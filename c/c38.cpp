#include<stdio.h>
int main()
{
    int n,m,i,j;
    int score[100],answer[100],student[100][100],sum[100] = {0};

    scanf("%d%d",&n,&m);
    for(i = 0; i < m; i++)
    {
        scanf("%d",&score[i]);
    }
    for(i = 0; i < m; i++)
    {
        scanf("%d",&answer[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d",&student[i][j]);
            if(student[i][j] == answer[j])
                sum[i] += score[j];
        }
    }   
    for(i = 0; i < n; i++)
    {
        printf("%d\n",sum[i]);
    }


    return 0;
}