#include<stdio.h>
int gcd(int m,int n)
{
	int r,tmp1,tmp2;
	r=m%n;
	while(r>0){
		r=m%n;
		tmp1=n;m=tmp1;
		tmp2=r;n=tmp2;
	}
	return m;
}
int main(void)
{
	int a,b;
	puts("����������������");
	printf("������1��"); scanf("%d",&a);
	printf("������2��"); scanf("%d",&b);
	if(a>0&&b>0)
	printf("���ǵ����������%d��\n",gcd(a,b)); 
	else puts("������������");
	return 0;
}
