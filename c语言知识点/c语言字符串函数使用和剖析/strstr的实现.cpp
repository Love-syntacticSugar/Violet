//ͦ�ѵģ����ԵĻ����� ������Ƶ--�ַ�����&�ڴ溯��ʹ�ú�������3��2          �ǳ������һ���⣡����
//������KMP�㷨---���ݽṹ���㷨 

#include<stdio.h>
#include<assert.h> 

char* my_strstr(char* p1,char* p2);
char* my_strstr(char* p1,char* p2)
{
	assert(p1 && p2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = p1;
	
	while(*cur)
	{
		s1 = cur;
		s2 = p2;
		
		while((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL; 
	
}

int main()
{
	char arr1[] = "abbbcdef";                //�ǳ�����������ַ������� 
	char arr2[] = "bbc";
	
	char* ret = my_strstr(arr1,arr2); 
	
	if(ret == NULL)
	{
		printf("�Ӵ������ڣ�");	
	}   
	else
	{
		printf("%s\n",ret);
	} 
	
	return 0;
}
