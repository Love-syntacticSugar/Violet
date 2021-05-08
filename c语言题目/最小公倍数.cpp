#include<stdio.h>
int main()
{
	printf("请输入两个自然数：");
	int x,y,i,max;
	scanf("%d %d",&x,&y);
	if(x <= y)
	{
		max = y;
	}
	else
	{
		max = x;
	}
	for(i=max;;i++)
	{
		if(i%x==0 && i%y==0)
		{
			printf("最小公倍数：%d\n",i);
			break;
		}
	}
	return 0;
}
