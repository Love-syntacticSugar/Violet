#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	
	printf("%p\n",&a);
	printf("%p\n",&b);
	
	printf("%p %d\n",&b - &a,&b - &a);
	
	return 0;
}
