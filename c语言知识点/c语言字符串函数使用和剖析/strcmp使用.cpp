/* strcmp
	�Ƚ������ַ��� str1��str2 (�ӵ�һ����ĸ��ʼ�Ƚ�ASCII��ֵ������һ����ĸ��ͬ��Ƚ���һ����ֱ���ȳ���Ϊֹ)
	��str1 > str2���򷵻ش���0������
	��str1 = str2���򷵻ش���0������
	��str1 < str2���򷵻ش���0������
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char* p1 = "qbc";
	char* p2 = "abc";
	
	int ret = strcmp(p1,p2);
	
	printf("%d\n",ret);
	
	return 0;
	
 } 
