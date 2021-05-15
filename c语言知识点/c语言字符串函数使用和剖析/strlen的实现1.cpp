//这是OW第一次做出来的，但是错了，因为题目不让创建临时变量 
//法一 


#include<stdio.h>

int n = 0;                  //第一次体会到全局变量的爽！！！

int get_long(char* p);
int get_long(char* p)
{       
	if(*p != '\0')
	{
		n += 1;
		get_long(p + 1);	
	}
	else
	{
		n += 0;
	}
	return n;
}

int main()
{
	char a[100];
	int b = 0;
	
	scanf("%s",a);
	
	b = get_long(a);
	
	printf("%d\n",b);
	
	return 0;
}
















