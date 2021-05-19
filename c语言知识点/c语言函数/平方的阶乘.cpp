#include<stdio.h>
int v(int a);
int v(int a)
{
	int sum = 1;
	int i;
	for(i = a;i > 0;i--)
	{
		sum *= i;
		if(i == 1)
		{
			break;
		}
	}
	return sum;
}
int p(int b);
int p(int b)
{
	return b*b;
}
int main()
{
	int n,s;
	scanf("%d",&n);
	s = v(p(n));
	printf("%d\n",s);
	return 0;
}
