//运用库函数求解 
//牛逼之处：字符串"abcdef"的所有旋转结果都存在于字符串"abcdefabcdef"里面，是其子集！（怎么想出来的？？恐怖！） 

#include<stdio.h>
#include<string.h>

int is_left_move(char* s1,char* s2);
int is_left_move(char* s1,char* s2)
{
	int len = strlen(s1);
	
	if(strlen(s1) != strlen(s2))     //如果没这一步会出问题，例如arr1[] = "abcdef" ; arr2[] = "cdef" ，明明不可能相等但却返回Yes！所以要用这一步去限制。 
	{
		return 0;
	 } 
	
	strncat(s1,s1,6);         //得到 "abcdefabcdef"（注意！不能用strcat函数！） 
	
	char* ret = strstr(s1,s1); // str用于找字符串，若找到了就返回字串第一个字符的地址，反之则返回空指针 
	
	if(ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	
	int ret = is_left_move(arr1,arr2);
	
	if(ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	
	return 0;
 }
