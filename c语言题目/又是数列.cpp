#include<math.h>
#include<stdio.h>
int main()
{
	int i,n=0;
	for(i=0;i<30;i++)
	{
		n+=pow(2,i);
		printf("%d ",n);        //λ������ÿո񻹿�����ʲô��%-2d�����ԣ���Ϊ���Ǵӵ�һλ����ʼ��ģ�����λ��һ�࣬�ո�ͱ�����ռ���� 
	}
	return 0;
	
 } 
