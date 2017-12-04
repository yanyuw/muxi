#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char a[10],b[10];
    int da,db,i,lena,lenb,suma,sumb,sum;

    scanf("%s%d%s%d",a,&da,b,&db);
    suma = sumb = sum = 0;
    lena = strlen(a);
    lenb = strlen(b);
    for(i = 0; i < lena; i++)
    {
        if(a[i] - '0' == da)
            suma++;
    }
    for(i = 0; i < lenb; i++)
    {
        if(b[i] - '0' == db)
            sumb++;
    }
    if(suma != 0)
        sum += da;
    if(sumb != 0)
        sum += db;
    for(i = 1; i < suma; i++)
    {
        sum += da * pow(10,i);
    } 
    for(i = 1; i < sumb; i++)
    {
        sum += db * pow(10,i);
    }
    printf("%d",sum);
    return 0;
}