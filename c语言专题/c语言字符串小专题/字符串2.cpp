#include<stdio.h>
int main()
{
	char str[5] = "abcd";
	char *p = str;
	printf("%c\n",*p);   //�ɴ˵ó�str��Ϊ��һ���ַ����׵�ַ 
	printf("%s\n",p);
	
	return 0;	
}
