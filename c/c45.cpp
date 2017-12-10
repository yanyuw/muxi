#include<stdio.h>
#include<string.h>

int main()
{
    int lena,z,o,j,i;
    char a[101];

    while(scanf("%s",a) && a[0] != 'E')
    {
        z = 0;
        o = 0;
        j = 0;
        lena = strlen(a);

        for(i = 0; i < lena; i++)
        {
            if(a[i] == 'Z')
                z++;
            else if(a[i] == 'O')
                o++;
            else if(a[i] == 'J')
                j++;   
        }
        while(z || o || j)
        {
            if(z)
            {
                printf("Z");
                z--;
            }
            if(o)
            {
                printf("O");
                o--;
            }
            if(j)
            {
                printf("J");
                j--;
            }
        }
        printf("\n");
    }
    return 0;
}

