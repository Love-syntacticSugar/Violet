//获取一个整数二进制中所有的偶数位和奇数位并分别打印出来

#include<stdio.h>

void print(int m);
void print(int m)
{
	int i = 0;
	printf("奇数位：\n");
	for(i = 30;i>=0;i -= 2)          //从0开始哦！！ 
	{
		printf("%d ",(m>>i)&1);
	}
	printf("\n");
	printf("偶数位：\n");
	for(i=31;i>=1;i -= 2)
	{
		printf("%d ",(m>>i)&1);
	}
	printf("\n");
}

int main()
{
	int n = 0;
	
	scanf("%d",&n);
	
	print(n);
	
	return 0;	
 } 
