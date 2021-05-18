#include<stdio.h>
int main()
{
	char c = 1;
	
	printf("%u\n",sizeof(c));
	printf("%u\n",sizeof(+c));      //只要进行了运算就会有整形提升 
	printf("%u\n",sizeof(!c));		//逻辑运算不会有整形提升 
	
	return 0;
}
