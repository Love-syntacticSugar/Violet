#include<stdio.h>
int main()
{
	char arr1[] = "abcde";
	char arr2[] = "abcde";
	char* p1 = "abcde";
	char* p2 = "abcde";
	
	if(arr1 == arr2)
	{
		printf("1\n");
	}
	else
	{
		printf("2\n");
	}
	
		if(p1 == p2)
	{
		printf("1\n");
	}
	else
	{
		printf("2\n");
	}
	
	return 0;
}
