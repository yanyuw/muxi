#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,z;
    int a[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int wrong[100];
    char m[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
    char id[100][20];


    scanf("%d",&n);
    k = 0;
    for(i = 0; i < n; i++)
    {
        z = 0;
        scanf("%s",id[i]);
        for(j = 0; j < 18; j++)
        {
            if(j != 17)
            {
                z += (id[i][j] - '0') * a[j];
            }
            else
            {
                z = z % 11;
                if(id[i][j] != m[z])
                {
                    wrong[k] = i;
                    k++;
                }
            }
        }
    }

    if(k == 0)
        printf("All passed");
    else
        for(i = 0; i < k; i++)
            printf("%s\n",id[wrong[i]]);

    return 0;
}