#include<stdio.h>
int main()
{
	char c = 1;
	
	printf("%u\n",sizeof(c));
	printf("%u\n",sizeof(+c));      //ֻҪ����������ͻ����������� 
	printf("%u\n",sizeof(!c));		//�߼����㲻������������ 
	
	return 0;
}
