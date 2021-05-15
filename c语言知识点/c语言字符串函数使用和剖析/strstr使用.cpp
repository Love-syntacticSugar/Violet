// str用于找字符串，若找到了就返回字串第一个字符的地址，反之则返回空指针 

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "abcdefgh";
	char arr2[] = "def";
	
	char* ret = strstr(arr1,arr2); 
	
	if(ret == NULL)
	{
		printf("子串不存在！");	
	}   
	else
	{
		printf("%s\n",ret);
	} 
	
	return 0;
}
