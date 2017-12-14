#include<stdio.h>
#include<string.h>
int main()
{
	char pw[20],userpw[50];
	char tmp[50];
	int n,i,len1,len2,max,count = 0;
	scanf("%s%d",pw,&n);
	// printf("pw=%s n=%d",pw,n);
	fgets(tmp,50,stdin);
	while(1)
	{
		fgets(userpw,50,stdin);
		// printf("%s",userpw);

		len1 = strlen(pw);
		len2 = strlen(userpw);
		if(len2 == 2 && userpw[0] == '#')
			break;
		if (userpw[len2-1] == '\n')
			userpw[len2-1] = '\0'; 
			
		if(strcmp(userpw,pw) == 0)
		{
			printf("Welcome in"); 
			break;
		}
		else
		{
			printf("Wrong password: %s\n",userpw);
			count++;
		}
		
		if(count >= n)
		{
			printf("Account locked\n");
			break;
		}
	}
	return 0;
}
