#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=0;n!=1;i++)
	{
		if(n%2!=0)
		{
			n=n*3+1;
			printf("%d*3+1=%d\n",(n-1)/3,n);
		}
		else
		{
			n/=2;
			printf("%d/2=%d\n",n*2,n);
		}
	}
	printf("End\n");
	return 0;
}
