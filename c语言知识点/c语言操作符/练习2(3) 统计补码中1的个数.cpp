#include<stdio.h>

int count_(int n);
int count_(int n)
{
	int count = 0;
	
	while(n)
	{
		n = n&(n-1);
		count++;
	}
	
	return count;
}

int main()
{
	int a = 0;
	int count = 0;
	
	scanf("%d",&a);
	
	count = count_(a);
	
	printf("%d\n",count);
	
	return 0;
}

/* n = n&(n-1)
	��13Ϊ��
	1101 & 1100 = 1100
	1100 & 1011 = 1000
	1000 & 0111 = 0000
	ÿ����һ�μ���һ��һ 
*/
