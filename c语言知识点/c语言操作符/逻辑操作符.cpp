#include<stdio.h>
int main()
{
	int a = 0;
	int b = 5;
	int c = a&&b;   //两个均为真c = 1；否则c = 0 
	int d = a||b;	//懂？！ 
	
	printf("%d\n",c);
	printf("%d\n",d);
	
	return 0;
}
