#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,sum,year,month,day;
    int minyear,minmonth,minday,maxyear,maxmonth,maxday;
    char name[5],old[5],young[5];
    sum = 0;
    maxyear = maxmonth = maxday = 0;
    minyear = 2014;
    minmonth = 9;
    minday = 6;

    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%s %d/%d/%d",name,&year,&month,&day);

        if((year<2014 || (year==2014 && month<9) || (year==2014 && month==9 && day<=6)) && (year>1814 || (year==1814 && month>9)|| (year==1814 && month==9 && day>=6)))
        {
            sum++;
            if(year<minyear || (year==minyear && month<minmonth) || (year==minyear && month==minmonth && day<minday))
            {
                strcpy(old,name);
                minyear = year;
                minmonth = month;
                minday = day;
            }
            if(year>maxyear || (year==maxyear && month>maxmonth) || (year==maxyear && month==maxmonth && day>maxday))
            {
                strcpy(young,name);
                maxyear = year;
                maxmonth = month;
                maxday = day;
            }
        }

    }
    if(sum>0)
        printf("%d %s %s",sum,old,young);
    else
        printf("%d",sum);
    return 0;
}