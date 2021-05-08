#include<stdio.h>
int main()
{
	int a=1,sum=0;
	while (a<100)
	{
		sum+=a;
		a+=2;
	}
	printf("%d\n",sum);
	return 0;
}
