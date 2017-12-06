#include<stdio.h>
int main()
{
    int n,m,a1,a2,b1,b2,sum1,sum2;
    sum1 = sum2 = 0;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
        m = a1 + b1;
        if(a2 == m && b2 == m);
        else
        {
            if( a2 == m)
                sum2++;
            if( b2 == m)
                sum1++;
        }

    }
    printf("%d %d",sum1,sum2);
    return 0;
}