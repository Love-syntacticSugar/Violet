//��������ʱ����������a��b��ֵ

#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	
	/* �Ӽ���--���ܻ����(�ܴ���)
		a = a+b;
		b = a-b;
		a = a-b;	
	*/
	
	//�ֻ�ķ���
	a = a^b;
	b = a^b;
	a = a^b;
	
	printf("%d %d\n",a,b);
	
	return 0; 
}

 
