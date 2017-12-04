#include<stdio.h>
int main()
{
    int a,b,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&a,&b);
        if(a % b ==  0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}