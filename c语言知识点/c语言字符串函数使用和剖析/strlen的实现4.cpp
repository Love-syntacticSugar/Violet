//法四AS--------指针减指针 

//法五AS--------递归（见c语言专题--递归专题--递归2 strlen的实现） 

#include<stdio.h>

int my_strlen(char* str);
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while(*end != '\0')
	{
		end++;
	}
	return end-start;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	
	printf("%d\n",len);
	
	return 0;
}
