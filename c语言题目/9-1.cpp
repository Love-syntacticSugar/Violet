#include<stdio.h>
int main()
{
	int a=1,b,c,sum=0;
	for (;a<=100;a++)
	{
		b=a+1;
		c=b*a;
		sum+=c;
		
	}
	printf("%d\n",sum);
	return 0;
}
