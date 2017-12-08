#include<stdio.h>
#include<string.h>
int main()
{
    char pw[50]={'0'},tmp[100]={'0'};
    int m,i,lenpw,flag1,flag2,flag3,flag4,flag;
    
    scanf("%d",&m);
    fgets(tmp,100,stdin);
    while(m--)
    {
        fgets(pw,51,stdin);
        lenpw = strlen(pw);
        flag1 = 0;
        flag2 = 0;
        flag3 = 0;
        flag4 = 0;
        
        if(lenpw < 9 || lenpw > 17)
            {
                printf("NO\n");
                continue;
            }
        for(i = 0; i < lenpw; i++)
        {
            if(pw[i] >= 'A' && pw[i] <= 'Z')
            {
                flag1 = 1;
            }
            if(pw[i] >= 'a' && pw[i] <= 'z')
            {
                flag2 = 1;
            }
            if(pw[i] >= '0' && pw[i] <= '9')
            {
                flag3 = 1;
            }
            if(pw[i] == '~' || pw[i] == '!' || pw[i] == '@' || pw[i] =='#' ||pw[i] == '$' || pw[i] == '%' || pw[i] == '^')
            {
                flag4 = 1;
            }
        }
        flag = flag1 + flag2 + flag3 + flag4;
        if(flag >= 3)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}