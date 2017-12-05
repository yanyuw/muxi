#include<stdio.h>
int main()
{
    char c;
    int n,m,i,j;

    scanf("%d %c",&n,&c);
    
	m = (double)n / 2 + 0.5;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == 0 || i == m - 1)
                printf("%c",c);
            else if(j == 0 || j == n-1)
                printf("%c",c);
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}