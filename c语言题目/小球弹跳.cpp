#include<stdio.h>
int main()
{
	printf("��ʼ�߶�Ϊ��");
	int i;
	double h,sum=0;
	scanf("%lf",&h);
	for(i=0;i<10;i++)
	{
		if(i==0)
		{
			printf("��%d�θ߶�%lg\n",i+1,h);
			sum+=h;
			printf("��%d�ξ���%lg\n",i+1,sum); 
		}
		else
		{
			h/=2;
			printf("��%d�θ߶�%lg\n",i+1,h);
			sum+=h*2;
			printf("��%d�ξ���%lg\n",i+1,sum);
		}
	}
	return 0;
}
