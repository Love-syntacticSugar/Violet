#include<stdio.h>
int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	
	*pc = 0;             //ֻ�ܷ���һ���ֽڣ�����ֻ�ܸ�11223344�����44��ֵ00����44����ΪС�˴洢�� 
	
	printf("%x\n",a);
	
	return 0;
}
