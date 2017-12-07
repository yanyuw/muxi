#include<stdio.h>
int main()
{
    int n,m,i;
    int b[1000],c[1000],d[1000];
    long long a[1000];
    
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%lld%d%d",&a[i],&b[i],&c[i]);
    }
    scanf("%d",&m);
    for(i = 1; i <= m; i++)
    {
        scanf("%d",&d[i]);
    }
    for(i = 1; i  <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(d[i] == b[j])
            printf("%lld %d\n",a[j],c[j]);
        }
    }
    
   
    return 0;
}