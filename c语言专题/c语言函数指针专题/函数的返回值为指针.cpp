#include<stdio.h>
int* sum(int x,int y);
int* sum(int x,int y)
{
	int s;
	s = x + y;
	return &s;
}
int main()
{
	int* r = sum(10,9);
	printf("%d\n",*r);
	return 0;
	
}

//��ʵ�õ��Ƿ���һ��ָ�������ָ�룬������ʵ���˷���ֵΪ���� 
