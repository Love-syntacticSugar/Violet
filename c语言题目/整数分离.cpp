#include<stdio.h>
int main()
{
	long n;
	int i,a;
	
	scanf("%ld",&n);
	for (i=0;n!=0;i++)
	{
		a=n%10;               //a��ֵ�ĸ��� 
		printf("%d ",a);
		n/=10;
	}
	return 0;
	
}
