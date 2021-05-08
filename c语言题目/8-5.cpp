#include<stdio.h>
int main()
{
	int a=1;
	for (;a<=100;a++)
	{
		if (0==a%3&&0==a%5)
		{
			printf("%d\n",a);
		}
	}
	return 0;
}
