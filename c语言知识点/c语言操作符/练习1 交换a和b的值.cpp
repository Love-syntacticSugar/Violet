//不创建临时变量，交换a和b的值

#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	
	/* 加减法--可能会溢出(很聪明)
		a = a+b;
		b = a-b;
		a = a-b;	
	*/
	
	//抑或的方法
	a = a^b;
	b = a^b;
	a = a^b;
	
	printf("%d %d\n",a,b);
	
	return 0; 
}

 
