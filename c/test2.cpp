#include<stdio.h>
#include<string.h>

int main()
{
	char a[1000],b[1000],c[1000],temp[1000] = "0";
	int lena,lenb,max,count = 1;
	
	scanf("%s",a);
	scanf("%s",b);
	
	lena = strlen(a);
	lenb = strlen(b);
	max = lena;
	
	if(lenb < lena)
	{
		for(int i = 0; i < (lena-lenb); i++)
		{
			strcat (temp,b);
			strcpy (b,temp);
			strcpy (temp,"0");
			
		}
		// printf("%s",b);
	}
	if(lenb > lena)
	{
		for(int i = 0; i < (lenb-lena); i++)
		{
			strcat (temp,a);
			strcpy (a,temp);
			strcpy (temp,"0");
			
		}
		// printf("%s",a);
		max = lenb;
	}
	
	for (int i = max - 1; i >= 0; i--)
	{
		if(count % 2 == 1)
		{
			switch((a[i] - '0' + b[i] - '0') % 13)
			{
				case 10 : c[i] = 'J';									break;
				case 11 : c[i] = 'Q';									break;
				case 12 : c[i] = 'K';									break;
				default : c[i] = (a[i] - '0' + b[i] - '0') % 13 + '0';	break;
			}
			count++;
		}	
		else
		{
			c[i] = (b[i] - a[i]);
			if(c[i] < 0)
			{
				c[i] += 10;
			}
			c[i] += '0';
			count++;
		}
	}

	printf("%s",c);
	return 0;
}
