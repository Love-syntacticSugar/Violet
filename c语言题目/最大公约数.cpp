#include<stdio.h>
int main()
{
	printf("输入两个正整数：");
	int x,y,max,min,i;
	scanf("%d %d",&x,&y);
	if(x <= y)
	{
		min = x;
	}
	else
	{
		min = y;
	}
	for(i = 1;i <= min;i++)
	{
		if(x%i==0 && y%i==0)
		{
			max = i;
		}
	}
	printf("最大公约数：%d\n",max);
	return 0;
}
