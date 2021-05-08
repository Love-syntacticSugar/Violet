#include<stdio.h>
int main()
{
	printf("Peter的5门课分数分别是：\n");
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a>b&&a>c&&a>d&&a>e)
	{
		printf("最高分是：%d\n",a);
	}
	else if (b>a&&b>c&&b>d&&b>e)
	{
		printf("最高分是：%d\n",b);
	}
	else if (c>b&&c>a&&c>d&&c>e)
	{
		printf("最高分是：%d\n",c);
	}
	else if (d>b&&d>c&&d>a&&d>e)
	{
		printf("最高分是：%d\n",d);
	}
	else
	{
		printf("最高分是：%d\n",e);
	}
	return 0;
}
