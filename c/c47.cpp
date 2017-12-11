#include<stdio.h>
int main()
{
    int n,i,num,max = 1,maxscore,maxi;
    int score[100000],tmp[100000];

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);   
        scanf("%d",&tmp[num]);
        score[num] += tmp[num];
        if(num > max)
            max = num;
    }
    maxscore = score[1];
    maxi = 1;
    for(i = 1; i <= max; i++)
    {
        if(score[i] > maxscore)
        {
            maxscore = score[i];
            maxi = i;
        }
    }
    printf("%d %d\n",maxi,maxscore);

    return 0;
}