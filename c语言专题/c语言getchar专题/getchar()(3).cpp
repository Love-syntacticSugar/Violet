#include<stdio.h>
int main()
{
	char c;
	
	while((c = getchar()) != EOF)    //输入ctrl+z表示结束输入 
	{
		if(c < '0' || c > '9')
		{
			continue;
		}
		putchar(c);
	}
	return 0;
}
