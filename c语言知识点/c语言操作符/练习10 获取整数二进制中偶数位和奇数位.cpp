//��ȡһ�����������������е�ż��λ������λ���ֱ��ӡ����

#include<stdio.h>

void print(int m);
void print(int m)
{
	int i = 0;
	printf("����λ��\n");
	for(i = 30;i>=0;i -= 2)          //��0��ʼŶ���� 
	{
		printf("%d ",(m>>i)&1);
	}
	printf("\n");
	printf("ż��λ��\n");
	for(i=31;i>=1;i -= 2)
	{
		printf("%d ",(m>>i)&1);
	}
	printf("\n");
}

int main()
{
	int n = 0;
	
	scanf("%d",&n);
	
	print(n);
	
	return 0;	
 } 
