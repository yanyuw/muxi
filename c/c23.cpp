#include<stdio.h>
#include<string.h>
int main()
{
	char number[1001];
	int a[10] = {0};
	int lennum,i;
	
	scanf("%s",number);
	lennum = strlen(number);
	
	for (i = 0; i < lennum; i++)
	{
		a[number[i] - '0']++;	
	}
	
	for (i = 0; i < 10; i++)
	{
		if(a[i] == 0) 
			continue;
		else printf("%d:%d\n",i,a[i]);
	}

	return 0;
} 
