#include<stdio.h>

int count_(unsigned int n);         //这个unsigned太巧妙了，保证了输入负数也可以出正确答案 
int count_(unsigned int n)
{
	int count = 0;
	while(n)
	{
		if(n%2 == 1)
		{
			count++;
		}
		n = n/2;
	}
	return count;
}

int main()
{
	int num = 0;
	int count = 0;
		
	scanf("%d",&num);	
	
	count = count_(num);
		
	printf("%d\n",count);
	
	return 0;
}
