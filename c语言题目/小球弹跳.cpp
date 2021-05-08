#include<stdio.h>
int main()
{
	printf("初始高度为：");
	int i;
	double h,sum=0;
	scanf("%lf",&h);
	for(i=0;i<10;i++)
	{
		if(i==0)
		{
			printf("第%d次高度%lg\n",i+1,h);
			sum+=h;
			printf("第%d次距离%lg\n",i+1,sum); 
		}
		else
		{
			h/=2;
			printf("第%d次高度%lg\n",i+1,h);
			sum+=h*2;
			printf("第%d次距离%lg\n",i+1,sum);
		}
	}
	return 0;
}
