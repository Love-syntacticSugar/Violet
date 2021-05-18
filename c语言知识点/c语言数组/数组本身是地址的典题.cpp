#include<stdio.h>
int main()
{
	int a[3];
	int i;
	for (i = 0;i < 3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0;i < 3;i++)
	{
		printf("%d ",*(a+i));       //*表示取值       a可以看作指针，也就是数组的第一个元素的地址
	}
	return 0; 
}
