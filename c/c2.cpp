#include<stdio.h>

int main(void)
{
	int n1,n2;
	puts("���������ſ�Ŀ�ĳɼ���"); 
	printf("��Ŀ1��"); scanf("%d",&n1);
	printf("��Ŀ2��"); scanf("%d",&n2);
	if(n1>=0&&n1<=100&&n2>=0&&n2<=100)
	switch (n1>60&&n2>60){
		case 1 :puts("it is pass"); break;
		case 0 :puts("it is not pass"); break;
	}
	else puts("it is error");
	
	return 0;
}
