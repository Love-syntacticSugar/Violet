#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	int i = 0;
	
	c = (a+b)/2;
	
	for(i;c < 50;i++)
	{
		c = (a+b)/2;            //如果没有这一句，将会进入死循环。不要认为a++，b++后将会执行第九行的语句！！不会的！！ 
		printf("%d\n",c);
		a++;
		b++;
		
	}
	return 0;
	
	
}
