#include<stdio.h>
int main()
{
	int i;
	float sum=0;                 //ǧ���д��int sum=0 
	for(i=1;sum<100;i++)
	{
		sum+=2.5;
		if(i%5==0)
		{
			sum-=6;
		}
		
	}
	printf("����%d�죬�Ŵ湻100Ԫ",i-1);        //�ܼ�סһ��i-1�� 
	return 0;
}
