/* strncat����
	1.����Դ�ַ���Ϊ��"abcde",���뿽����Ϊ3���򿽱���ȥ���ַ���Ϊ��"abc'\0'"�����Զ���һ��"\0"!!!��  
	2.����Դ�ַ���Ϊ��"abc",���뿽����Ϊ 6 ���򿽱���ȥ���ַ���Ϊ��"abc'\0'"(�����ʱֻ���������ַ��������Ჹ'\0'ʲô��)
*/
	
#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[30] = "abcasfafvavavaas";       
	char arr2[] = "defda";
	
	strncat(arr1,arr2,3);      
	
	printf("%s\n",arr1);
	
	return 0;
}

