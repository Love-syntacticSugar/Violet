//函数指针数组 ----别称：转移表 

#include<stdio.h>

int Add(int a,int b);
int Add(int a,int b)
{
	return a+b;
}

int Sub(int a,int b);
int Sub(int a,int b)
{
	return a-b;
}

int Mul(int a,int b);
int Mul(int a,int b)
{
	return a*b;
}

int Div(int a,int b);
int Div(int a,int b)
{
	return a/b;
}

int main()
{
	int (*parr[4])(int,int) = {Add,Sub,Mul,Div};
	int i = 0;
	
	for(i = 0;i < 4;i++)
	{
		printf("%d\n",parr[i](2,3));               //parr[i](2,3))单独拿出来你能联想到什么？ 
	}
	
	return 0;
}
