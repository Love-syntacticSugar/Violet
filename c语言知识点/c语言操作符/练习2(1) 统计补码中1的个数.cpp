//ͳ��һ�����Ĳ�����1�ĸ��� 

//��һ ��������λ���ͻ�λ�룩 
#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	int i = 0;	
	
	scanf("%d",&num);

	for(i = 0;i < 32;i++)
	{
		if(1 == ((num>>i) & 1))
		{
			count++;	
		}	
	} 
	
	printf("%d\n",count);
	
	return 0;
}




