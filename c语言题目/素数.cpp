#include<stdio.h>
int main()
{
	int i,n,temp;
	scanf("%d",&n);
	if(n==2)
	{
		printf("������");
	}
	else
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				break;
			}
			else
			{
				temp=i;
			}
		}
		if(temp==n-1)
		{
			printf("������");
		}
	}
}
