#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b&&a>c)          /*  &&��ʾ ����������������Ϊ��   ||��ʾ һ���������������� */
	printf("%d\n",a);
	else if (b>a&&b>c)
	printf("%d\n",b);
	else
	printf("%d\n",c);
	return 0;
}
