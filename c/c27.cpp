// 没通过
#include<stdio.h>
int main()
{
    double q,aa,bb,cc;
    char a[1000];
    double b[1000],c[1000],dp[50];
    int n,m,i,j,k,sum;
    while(scanf("%lf%d",&q,&n) != EOF)
    {
        sum = 0;
        k = 0;
        for(i = 0; i < n; i++)
        {
            int flag = 1;
            aa = bb = cc = 0;
            scanf("%d",&m);
            for(j = 0; j < m; j++)
            {
                scanf("%c:%lf",&a[j],&b[j]);
                switch(a[j])
                {
                    case 'A': aa += b[j]; break;
                    case 'B': bb += b[j]; break;
                    case 'C': cc += b[j]; break;
                    default: flag = 0;    break;
                }
                if(aa > 600 || bb > 600 || cc >600 || (aa+bb+cc) > 1000)
                    flag = 0;
            }
            if(flag)
                if((aa+bb+cc)<q)
                    c[k++] = aa + bb + cc ;
        }

        for(i = 0; i < k-1; i++)
            for(j = k; j > 0; j--)
            {
                if(j==1 || dp[j-1] > 0 && dp[j-1]+c[i] <= q)
                    {
                        if(dp[j] > dp[j-1]+c[i])
                            dp[j] = dp[j];
                        else 
                            dp[j] = dp[j-1] + c[i];
                    }
            }

        for(i = 1; i <= k; i++)
        {
            if(dp[sum] < dp[i])
                sum = i;
        }
        printf("%.2f\n",dp[sum]);
    }

    return 0;
}