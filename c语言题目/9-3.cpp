#include<stdio.h>
int main()
{
	float a=1,m=10,b=1.2;
	for (;a<=20;a++)
	{
		printf("%g ",a);
		m*=b;
		printf("%g\n",m);
	}
	return 0;
}
