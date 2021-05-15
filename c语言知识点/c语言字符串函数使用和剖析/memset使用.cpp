/* memset
	 1.注意第三个参数为字节数（若定义int a[]就容易掉进坑里） 
*/ 

#include<stdio.h>
#include<string.h>

int main()
{
	char a[] = "hello world!";
	
	memset(a+1,'#',5);
	
	printf("%s\n",a);
	
	return 0;	
}
