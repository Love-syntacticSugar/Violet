#include<stdio.h>

int i;
int main()
{
	i--;
	
	if(i > sizeof(i))       //ע�⣡sizeof�ķ���ֵ���޷������������߼������������ߵ�����Ҫ��ͬ���������i��ԭ��111111111111111111���������޷��������� 
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	
	return 0;
}
