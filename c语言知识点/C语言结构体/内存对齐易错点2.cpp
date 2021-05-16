#include<stdio.h>
struct C
{
	char a[123];      //对齐数是1！！！！！ 解释见下 
	int b;
};

int main()
{	
	printf("%d\n",sizeof(C));
	return 0;	
}

/*重中之重
数组并非一种数据类型，这个数组的数据类型是char，char的对齐长度是1
					同理若定义int a[123],则对齐长度是4 
*/
