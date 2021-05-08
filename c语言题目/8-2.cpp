#include<stdio.h>
int main()
{
	int a=1,sum=0;
	for (;a<100;a+=2)
	{
		sum+=a;
	}
	printf("%d\n",sum);
	return 0;
}
