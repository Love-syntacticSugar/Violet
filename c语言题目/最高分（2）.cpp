#include<stdio.h>
int main()
{
	printf("Peter的5门课分数分别是：\n");
	int i,a[5],max=0;
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		if (max<a[i])
		{
			max=a[i];
		}
	}
	printf("最高分是：%d",max);
	return 0;
}




