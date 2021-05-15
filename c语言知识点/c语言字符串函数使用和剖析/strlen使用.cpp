#include<stdio.h>
#include<string.h>

int main()
{
	if(strlen("abc") - strlen("abcdef") > 0)        //可以直接"abc"放进去哦 
	{
		printf("A\n");
	}
	else
	{
		printf("B\n");
	}
	
	return 0;
}

/*  解释：
	strlen 的返回值为 size_t
	而size_t为： typedef _W64 unsigned int  sizeof_t
	返回值为unsigned int！！！！
	所以这题 strlen("abc") - strlen("abcdef") == -3    -3会被当作无符号数字看待
*/ 
