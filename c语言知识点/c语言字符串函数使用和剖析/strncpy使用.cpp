/* strncpy
	1.����һ����������Ҫ�����Ĳ����ĸ���
	2.�����������ַ���Ϊ"abc"������ƫƫҪ����6���ַ�����ʣ�µ��ַ���Ϊ'\0' 
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[10] = "abcdefasf";
	char arr2[] = "bit";
	
	strncpy(arr1,arr2,2);       //��.����---��Ҫ�������ٿ������٣�����˲����'\0'������ȥ�����Խ���ǣ�"bicdef" 
	
	printf("%s\n",arr1);
	
	return 0;
}
