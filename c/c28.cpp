#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int sum,len,n;

    scanf("%d",&n);
    while(n--)
    {
        sum = 0;
        scanf("%s",a);
        len = strlen(a);
        for(int i = 0; i < len; i++)
        {
            if( a[i] >= '0' && a[i] <= '9')
                sum++;
        }
        printf("%d\n",sum);

    }
    return 0;
}