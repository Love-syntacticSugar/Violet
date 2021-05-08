#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a>=90)
	{
		printf("A\n");
	}
	else if (a>=70&&a<90)
	{
		printf("B\n");
	}
	else if (a>=60&&a<70)
	{
		printf("C\n");
	}
	else
	{
		printf("D\n");
	}
	return 0;
}
