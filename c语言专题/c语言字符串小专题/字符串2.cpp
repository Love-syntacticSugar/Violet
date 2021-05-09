#include<stdio.h>
int main()
{
	char str[5] = "abcd";
	char *p = str;
	printf("%c\n",*p);   //由此得出str即为第一个字符的首地址 
	printf("%s\n",p);
	
	return 0;	
}
