#include<stdio.h>
int main()
{
    int n,i,sum,result;
    int pay[100];

    while(scanf("%d",&n) && n != 0)
    {
        result = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d",&pay[i]);
            while(pay[i] >= 100)
            {
                pay[i] -= 100;
                result++;
            }
            while(pay[i] >= 50)
            {
                pay[i] -= 50;
                result++;
            }
            while(pay[i] >= 10)
            {
                pay[i] -= 10;
                result++;
            }
            while(pay[i] >= 5)
            {
                pay[i] -= 5;
                result++;
            }
            while(pay[i] >= 2)
            {
                pay[i] -= 2;
                result++;
            }
            while(pay[i] >= 1)
            {
                pay[i] -= 1;
                result++;
            }
        }
        printf("%d\n",result);
    }
    return 0;
}