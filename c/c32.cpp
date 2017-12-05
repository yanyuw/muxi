#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    
    scanf("%d",&n);

    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;

    for(i = 0; i < a; i++)
        printf("B");
    for(i = 0; i < b; i++)
        printf("S");
    for(i = 0; i < c; i++)
        printf("%d",i+1);

    return 0;
}