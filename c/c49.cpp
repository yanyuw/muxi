#include<stdio.h>
#include<string.h>
#include<ctype.h>
void str_toupper(char s[])
{
    int i = 0;
    while (s[i])
    {
        s[i] = toupper(s[i]);
        i++;
    }
}

int main()
{
    char in[100]={'0'},out[100]={'0'},wrong[100]={'\0'};
    int len1,len2,len3,i,j,k,t,flag;

    scanf("%s",in);
    scanf("%s",out);
    str_toupper(in);
    str_toupper(out);


    len1 = strlen(in); 
    len2 = strlen(out);

    k = 0;
    for(i = 0; i < len1; i++)
    {
        for(j = 0; j < len2; j++)
        {
            if(out[j] == in[i])
            {
                break;
            }
        }
        // printf("i=%d,j=%d ",i,j);
        if(j == len2)
        {
            flag = 1;
            if(k == 0)
            {
                wrong[k] = in[i];
                k++;
                continue;
            }
            len3 = strlen(wrong);
            // printf("len3 = %d ",len3);
            for(t = 0; t < len3; t++)
            {
                if(in[i] == wrong[t])
                {
                    flag = 0;
                }
            }
            if(flag)
            {
                wrong[k] = in[i];
                k++;
            }
        }
    }
    printf("%s",wrong);
    return 0;
}