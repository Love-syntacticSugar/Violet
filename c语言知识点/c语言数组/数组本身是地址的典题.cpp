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
		printf("%d ",*(a+i));       //*��ʾȡֵ       a���Կ���ָ�룬Ҳ��������ĵ�һ��Ԫ�صĵ�ַ
	}
	return 0; 
}
