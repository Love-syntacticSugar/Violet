#include<stdio.h>
#include<string.h> 
int main()
{
	char str[5] = "abcd";        //注意这里定义的是5哦，因为还有一个'\0' 
	
	printf("%d\n",strlen(str));    //！！！一定一定要注意！！不是5！！   '\0'不算进字符串长度，不计入字符串内容 
	
	return 0;	
}
