#include<stdio.h>
int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	
	*pc = 0;             //只能访问一个字节，所以只能给11223344里面的44赋值00（变44是因为小端存储） 
	
	printf("%x\n",a);
	
	return 0;
}
