#include<stdio.h>
int main()
{
    int n,a1,a2,a3,ac,ab,aj,bc,bb,bj,maxa,maxb;
    char a,b;
	scanf("%d%*c",&n);
    a1 = a2 = a3 = 0;
    ac = ab = aj = bc = bb = bj = 0;
    while(n--)
    {
        scanf("%c%*c",&a);
        scanf("%c%*c",&b);
        // printf("a=%c b=%c",a,b);
        if(a == b)
        {
            a2++;
        }
        else
        {
            if(a == 'C')
            {
                if(b == 'J')
                {
                    a1++;
                    ac++;
                }
                if(b == 'B')
                {
                    a3++;
                    bb++;
                }
            }
            if(a == 'J')
            {
                if(b == 'C')
                {
                    a3++;
                    bc++;
                }
                if(b == 'B')
                {
                    a1++;
                    aj++;
                }
            }
            if(a == 'B')
            {
                if(b == 'C')
                {
                    a1++;
                    ab++;
                }
                if(b == 'J')
                {
                    a3++;
                    bj++;
                }
            }
        }
    }
    maxa = ab;
    maxb = bb;
    a = 'B';
    b = 'B';
    if(ac > maxa)
    {
        maxa = ac;
        a = 'C';
    }
    if(aj > maxa)
    {
        maxa = aj;
        a = 'J';
    }

    if(bc > maxb)
    {
        maxb = bc;
        b = 'C';
    }
        
    if(bj > maxb)
    {
        maxb = bj;
        b = 'J';
    }
        
    printf("%d %d %d\n",a1,a2,a3);
    printf("%d %d %d\n",a3,a2,a1);
    printf("%c %c",a,b);
    return 0;
}