#include<stdio.h>

int main()
{
    int n,i,j,sum;
    int a[10];
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    sum = 0;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
        {
            if(j != i)
                sum += a[i]*10 + a[j];
        }

    printf("%d",sum);
    return 0;
}