#include<stdio.h>
#include<string.h>

int main()
{
	int a[4];                 //可以输入4个数字 
	char b[4] = "abc";        //只能输3个字符 
	
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(b));    //计入'\n' 
	
	printf("%d\n",strlen(b));    // 1.不计入'\n'   2.不能计算数组大小，只能计算字符串长度 
	
	return 0;
}
