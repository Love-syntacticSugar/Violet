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
		c = (a+b)/2;            //���û����һ�䣬���������ѭ������Ҫ��Ϊa++��b++�󽫻�ִ�еھ��е���䣡������ģ��� 
		printf("%d\n",c);
		a++;
		b++;
		
	}
	return 0;
	
	
}
