#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest,const char* src);     //const��ʹ�� 
char* my_strcpy(char* dest,char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	
	char* ret = dest;
	 
	while(*dest++ = *src++)     //�����1����*dest++ = *src++������������  �����2��++�������ʹ��   �����3����\0������ȥ�����ж���٣���Ҳ���������һ�� 
	{
		;
	}
	
	return ret;
}

int main()
{
	char arr1[] = "asaifjasjfa";     //ǧ����壺char* p = "avasvaa" ,����ַ����ǲ��ܱ��ı�ģ���Ϊpָ�����һ�������ַ��� 
	char arr2[] = "abc";
	
	my_strcpy(arr1,arr2);
	
	printf("%s\n",arr1);	
	
	return 0;
}

