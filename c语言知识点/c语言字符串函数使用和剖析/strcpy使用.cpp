/*strcpy����
	char* strcpy(char* destination,const char* source);
	1.Դ�ַ���������'\0' �һ��'\0' ������ȥ 
	2.Ŀ��ռ���Ҫ�㹻����ȷ���ܴ��Դ�ַ��� 
	3. Ŀ��ռ����ɱ�      
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "asaifjasjfa";     //ǧ����壺char* p = "avasvaa" ,����ַ����ǲ��ܱ��ı�ģ���Ϊpָ�����һ�������ַ��� 
	char arr2[] = "abc";
	
	strcpy(arr1,arr2);
	
	printf("%s\n",arr1);	
	
	return 0;
}

 
