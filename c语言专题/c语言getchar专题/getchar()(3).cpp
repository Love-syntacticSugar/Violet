#include<stdio.h>
int main()
{
	char c;
	
	while((c = getchar()) != EOF)    //����ctrl+z��ʾ�������� 
	{
		if(c < '0' || c > '9')
		{
			continue;
		}
		putchar(c);
	}
	return 0;
}
