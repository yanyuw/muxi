// 没通过
#include<stdio.h>
int main()
{
    double q,sum,aa,bb,cc;
    char a[1000];
    double b[1000],c[1000] = {0};
    int n,m,i,j,k;
    while(scanf("%lf%d",&q,&n) != EOF)
    {
        sum = 0;
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
            for(j = 0; j < k-1-i; j++)
                if(c[j] < c[j+1])
                {
                    int tmp=c[j];
                    c[j] = c[j+1];
                    c[j+1] = tmp;
                }
        for(i = k; i >= 1; i--)
        {
            if(sum + c[i] > q) 
                continue;
            sum += c[i];
        }

        printf("%.2f\n",sum);
    }

    return 0;
}