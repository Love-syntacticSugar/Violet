#include<stdio.h>
int main()
{
	printf("请输入一个三位数：");
	int a;
	scanf("%d",&a);
	printf("%d\n",(a/100)+(a/10)-(a/100)*10+a%10);
	return 0;
 } 
