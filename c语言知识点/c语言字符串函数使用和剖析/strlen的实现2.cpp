//这是OW第二次做出来的，不用那个该死的全局变量 
//法二 

#include<stdio.h>

int get_long(char* p);
int get_long(char* p)
{
    int n = 0;            
	if(*p != '\0')
	{
		n = 1+get_long(p + 1);	
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
