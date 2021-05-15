/* strncat剖析
	1.假设源字符串为："abcde",输入拷贝数为3，则拷贝过去的字符串为："abc'\0'"（会自动加一个"\0"!!!）  
	2.假设源字符串为："abc",输入拷贝数为 6 ，则拷贝过去的字符串为："abc'\0'"(即溢出时只拷贝现有字符串，不会补'\0'什么的)
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

