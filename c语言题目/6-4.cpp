#include<stdio.h>
int main()
{
	char c;
	int a,b;
	scanf("%d%d %c",&a,&b,&c);          //注意，由于"空格"也算字符，所以不能%d%c，这样的话%c就是空格了，要在它们中间加一个空格，这样读的就是字符了。 
	if (c=='+')
	{
		printf("%d\n",a+b);
	}
	else if (c=='-')
	{
		printf("%d\n",a-b);
	}
	else if (c=='*')
	{
		printf("%d\n",a*b);
	}
	else if (c=='/')
	{
		if (b!=0)
		{
			printf("%d\n",a/b);
		}
		else
		{
			printf("Divided by zero!\n");
		}
	}
	else
	{
		printf("Invalid operator!\n");
	}
	return 0;	
}
