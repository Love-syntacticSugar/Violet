/* memset
	 1.ע�����������Ϊ�ֽ�����������int a[]�����׵������ 
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
