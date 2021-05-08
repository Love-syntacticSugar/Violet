#include<stdio.h>
int main()
{
	printf("请输入一个两位数：");
	int a;
	scanf("%d",&a);
	printf("%d%d\n",a%10,a/10);
	return 0;
	
	 
}
