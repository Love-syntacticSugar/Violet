#include<stdio.h>
struct A
{
	char a:3;   
	char b:4;
	char c:5;
	char d:4;
};
int main()
{
	struct A m = {0
	};
	m.a = 10;
	m.b = 20;
	m.c = 3;
	m.d = 4;
	printf("%d\n",m.a);
	printf("%d\n",m.b);
	printf("%d\n",m.c);
	printf("%d\n",m.d);
	  
	return 0;
		
}
