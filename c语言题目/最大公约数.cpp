#include<stdio.h>
int main()
{
	printf("����������������");
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
	printf("���Լ����%d\n",max);
	return 0;
}
