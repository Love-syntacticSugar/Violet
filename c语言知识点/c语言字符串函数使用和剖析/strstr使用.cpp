// str�������ַ��������ҵ��˾ͷ����ִ���һ���ַ��ĵ�ַ����֮�򷵻ؿ�ָ�� 

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "abcdefgh";
	char arr2[] = "def";
	
	char* ret = strstr(arr1,arr2); 
	
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
