#include<stdio.h>
#include<ctype.h>
#include<string.h>
void str_tolower(char s[])
{
    int i = 0;
    while (s[i])
    {
        s[i] = tolower(s[i]);
        i++;
    }
}

int main()
{
    char a[1000];
    int b[30] = {0},max = 0,lena,i,maxchar;

    fgets(a,1001,stdin);
    str_tolower(a);
    lena = strlen(a);

    for(i = 0; i < lena; i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
            b[a[i]-'a']++;
    }
    
    for(i = 0; i < 26; i++)
    {
       if(b[i] > max)
       {
            max = b[i];
            maxchar = i;
       }
        
    }

    printf("%c %d",maxchar+'a',max);

    return 0;
}