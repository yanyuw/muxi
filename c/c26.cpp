#include<stdio.h>
int gcd(int a,int b)
{
    if (b == 0) 
        return a;
    else 
        return gcd(b,a%b);
}


int main()
{
    int m,n,r;
    while (scanf("%d%d",&m,&n)!=EOF)
    {
        r = m * n / gcd(m,n);
        printf("%d\n",r);
    }
    return 0;
} 