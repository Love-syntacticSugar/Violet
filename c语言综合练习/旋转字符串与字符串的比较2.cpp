//���ÿ⺯����� 
//ţ��֮�����ַ���"abcdef"��������ת������������ַ���"abcdefabcdef"���棬�����Ӽ�������ô������ģ����ֲ����� 

#include<stdio.h>
#include<string.h>

int is_left_move(char* s1,char* s2);
int is_left_move(char* s1,char* s2)
{
	int len = strlen(s1);
	
	if(strlen(s1) != strlen(s2))     //���û��һ��������⣬����arr1[] = "abcdef" ; arr2[] = "cdef" ��������������ȵ�ȴ����Yes������Ҫ����һ��ȥ���ơ� 
	{
		return 0;
	 } 
	
	strncat(s1,s1,6);         //�õ� "abcdefabcdef"��ע�⣡������strcat�������� 
	
	char* ret = strstr(s1,s1); // str�������ַ��������ҵ��˾ͷ����ִ���һ���ַ��ĵ�ַ����֮�򷵻ؿ�ָ�� 
	
	if(ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	
	int ret = is_left_move(arr1,arr2);
	
	if(ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	
	return 0;
 }
