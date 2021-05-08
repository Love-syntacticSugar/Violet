#include<stdio.h>

int i;
int main()
{
	i--;
	
	if(i > sizeof(i))       //注意！sizeof的返回值是无符号数！！而逻辑运算左右两边的类型要相同，所以左边i的原码111111111111111111将被看成无符号数处理 
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	
	return 0;
}
