#include<stdio.h>
int main()
{
	printf("Peter��5�ſη����ֱ��ǣ�\n");
	int i,a[5],max=0;
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		if (max<a[i])
		{
			max=a[i];
		}
	}
	printf("��߷��ǣ�%d",max);
	return 0;
}




