#include<stdio.h>
#include<string.h> 
int main()
{
	char str[5] = "abcd";        //ע�����ﶨ�����5Ŷ����Ϊ����һ��'\0' 
	
	printf("%d\n",strlen(str));    //������һ��һ��Ҫע�⣡������5����   '\0'������ַ������ȣ��������ַ������� 
	
	return 0;	
}
