//统计两个数中，不同位的个数 

#include<stdio.h>

int count_bit_one(int n);
int count_bit_one(int n)
{
	int count = 0;
	
	while(n != 0)
	{	
		n = n&(n-1);
		count++;	
	}
	
	return count;
}

int get_diff_bit(int m,int n);
int get_diff_bit(int m,int n)
{
	int tmp = m^n;
	return count_bit_one(tmp);
}

int main()
{
	int m = 0;
	int n = 0;
	
	scanf("%d%d",&m,&n);
	
	int count = get_diff_bit(m,n);
	
	printf("count = %d\n",count);
	
	return 0;
}
