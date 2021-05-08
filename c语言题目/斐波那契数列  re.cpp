#include<stdio.h>
int main()
{
	int k,i;
	scanf("%d",&k);
	if(k==1)
	{
		printf("    1");
	}
	else if(k==2)
	{
		printf("    1    1");
	}
	else
	{
		int arr[k]={1,1};
		printf("    %-5d%-5d",arr[0],arr[1]);      //注意！%-5d是指你输入的这个值后面空！！4！！个格子 
		for(i=2;i<k;i++)
		{
			arr[i]=arr[i-1]+arr[i-2];
			printf("%-5d",arr[i]);
		}
	}
	return 0;
	

}
