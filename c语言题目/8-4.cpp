#include<stdio.h>
int main()
{
	long i,a=1,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		a*=i;
	}
	printf("%d\n",a);
	return 0;
}
