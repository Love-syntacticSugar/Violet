#include<stdio.h>

#pragma pack(4)      //开始的位置     一般定义2的倍数 
struct S
{
	char c1;
	double d;
};
#pragma pack()       //终止的意思 
int main()
{
	printf("%d\n",sizeof(struct S));
	return 0;
}
