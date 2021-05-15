/* strcat剖析
	char*strcat(char* destination,const char* source)
	1.源字符串必须有'\0'  
	2.目标空间需要足够大，以确保能存放源字符串
	3.在目标字符串的\0后面追加 
	4.不能自己给自己追加  （why？看了strcat的实现就懂了！） 
*/
	
#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[30] = "abc\0asfafvavavaas";       //不能char arr1[] = "abcafsf"; 因为是在\0后面追加的，但是字符串长度不够存放追加的字符串 
	char arr2[] = "defda";
	
	strcat(arr1,arr2);       //注意！不能 strcat(arr1,arr1);也就是说不能自己追加自己 
	
	printf("%s\n",arr1);
	
	return 0;
}

