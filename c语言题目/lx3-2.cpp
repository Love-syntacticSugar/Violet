#include<stdio.h>
int main()
{
	printf("������һ����λ����");
	int a;
	scanf("%d",&a);
	printf("%d\n",(a/100)+(a/10)-(a/100)*10+a%10);
	return 0;
 } 
