#include<stdio.h>
int main()
{
	int i;
	float sum=0;                 //千万别写成int sum=0 
	for(i=1;sum<100;i++)
	{
		sum+=2.5;
		if(i%5==0)
		{
			sum-=6;
		}
		
	}
	printf("经过%d天，才存够100元",i-1);        //能记住一次i-1吗？ 
	return 0;
}
