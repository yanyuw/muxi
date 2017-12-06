#include<stdio.h>
int main()
{
    int t,n;
    double height[100],max; 
    scanf("%d",&t);
    while(t--)
    {
        max = 0;
        scanf("%d",&n);
        for(int i = 0; i < n; i++)
        {
            scanf("%lf",&height[i]);
            if(height[i] > max)
                max = height[i];
        }
        printf("%.2f\n",max);
    }
    
    return 0;
}