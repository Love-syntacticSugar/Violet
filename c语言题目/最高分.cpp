#include<stdio.h>
int main()
{
	printf("Peter��5�ſη����ֱ��ǣ�\n");
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a>b&&a>c&&a>d&&a>e)
	{
		printf("��߷��ǣ�%d\n",a);
	}
	else if (b>a&&b>c&&b>d&&b>e)
	{
		printf("��߷��ǣ�%d\n",b);
	}
	else if (c>b&&c>a&&c>d&&c>e)
	{
		printf("��߷��ǣ�%d\n",c);
	}
	else if (d>b&&d>c&&d>a&&d>e)
	{
		printf("��߷��ǣ�%d\n",d);
	}
	else
	{
		printf("��߷��ǣ�%d\n",e);
	}
	return 0;
}
