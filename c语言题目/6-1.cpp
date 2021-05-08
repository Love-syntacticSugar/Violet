 #include<stdio.h>
int main()
{
	printf("请输入一个年份："); 
	int a,b,c,d;
	scanf("%d",&a);
	b=a%100,c=a%4,d=a%400;
	if (c==0)
	{
		if (b==0)
		{
			if (d==0)
			{
				printf("%d是闰年\n",a);
			}
			else
			{
			printf("%d是平年\n",a);
			}
		}
		else
		{
			printf("%d是闰年\n",a);
		}
	}
	else
	{
		printf("%d是平年\n",a);
	}
	return 0;
}
