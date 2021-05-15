#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest,const char* src);     //const的使用 
char* my_strcpy(char* dest,char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	
	char* ret = dest;
	 
	while(*dest++ = *src++)     //巧妙点1：把*dest++ = *src++这个结果当条件  巧妙点2：++运算符的使用   巧妙点3：把\0拷贝进去后再判断真假，这也是最巧妙的一点 
	{
		;
	}
	
	return ret;
}

int main()
{
	char arr1[] = "asaifjasjfa";     //千万别定义：char* p = "avasvaa" ,这个字符串是不能被改变的，因为p指向的是一个常量字符串 
	char arr2[] = "abc";
	
	my_strcpy(arr1,arr2);
	
	printf("%s\n",arr1);	
	
	return 0;
}

