/*strcpy剖析
	char* strcpy(char* destination,const char* source);
	1.源字符串必须以'\0' 且会把'\0' 拷贝进去 
	2.目标空间需要足够大，以确保能存放源字符串 
	3. 目标空间必须可变      
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "asaifjasjfa";     //千万别定义：char* p = "avasvaa" ,这个字符串是不能被改变的，因为p指向的是一个常量字符串 
	char arr2[] = "abc";
	
	strcpy(arr1,arr2);
	
	printf("%s\n",arr1);	
	
	return 0;
}

 
