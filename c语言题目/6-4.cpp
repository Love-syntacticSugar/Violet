#include<stdio.h>
int main()
{
	char c;
	int a,b;
	scanf("%d%d %c",&a,&b,&c);          //ע�⣬����"�ո�"Ҳ���ַ������Բ���%d%c�������Ļ�%c���ǿո��ˣ�Ҫ�������м��һ���ո��������ľ����ַ��ˡ� 
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
