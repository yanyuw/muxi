#include <stdio.h>
int main(void)
{
	double a,b,c;
	puts("����������ʵ����"); 
	printf("ʵ��1��"); scanf("%d",&a);
	printf("ʵ��2��"); scanf("%d",&b);
	printf("ʵ��3��"); scanf("%d",&c);

	if(((a+b>c)&&(b+c>a)&&(a+c>b))==0)
	  printf("0");
	else if(a==b&&b==c)
	  printf("1");
	  else if(a==b||b==c||a==c)
	  printf("2");
	  else printf("3");

	return 0;
}
