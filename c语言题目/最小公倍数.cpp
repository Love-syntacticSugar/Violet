#include<stdio.h>
int main()
{
	printf("������������Ȼ����");
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
			printf("��С��������%d\n",i);
			break;
		}
	}
	return 0;
}
