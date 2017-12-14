#include<stdio.h>
#include<string.h>
int main()
{
	char number[11][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char a[100];
	int sum = 0,len,i;
	int b[5];
	
	scanf("%s",a);
	len=strlen(a);
	for (i = 0; i < len; i++)
	{
		sum += (a[i]-'0');
	}
	
 	for(i = 0; sum >= 10; i++)
	{ 
        b[i] = sum % 10;
        sum /= 10; 
    } 
	b[i] = sum;
  
	while(i >= 0)
	{ 
    	if(i!=0)
		{  
    		printf("%s ",number[b[i]]);  
    	}
		else
		{  
    		printf("%s\n",number[b[i]]);  
    	}  
		i--;
	}  
	return 0;
}
