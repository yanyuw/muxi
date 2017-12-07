#include<stdio.h>
int main()
{
    int t0,k,n1,b,t,n2;

    scanf("%d%d",&t0,&k);
    while(k--)
    {
        scanf("%d%d%d%d",&n1,&b,&t,&n2);
        if(t > t0 )
        {
            printf("Not enough tokens.  Total = %d.\n",t0);
            continue;
        }   

        if(b == 0)
        {
            if(n1 > n2)
            {
                printf("Win %d!  Total = %d.\n",t,t0+t);
                t0 += t;
            }
            else
            {
                printf("Lose %d.  Total = %d.\n",t,t0-t);
                t0 -= t;
                if(t0 == 0)
                {
                    printf("Game Over.");
                    break;
                }
            }
        }
        else
        {
            if(n1 < n2)
            {
                printf("Win %d!  Total = %d.\n",t,t0+t);
                t0 += t;
            }
            else
            {
                printf("Lose %d.  Total = %d.\n",t,t0-t);
                t0 -= t;
                if(t0 == 0)
                {
                    printf("Game Over.");
                    break;
                }  
            }
        }
    }
    return 0;
}