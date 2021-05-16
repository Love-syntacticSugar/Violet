#include<stdio.h>
struct A
{
	int a:2;      //冒号后面的数字指的是bit位 
	int b:5;
	int c:10;
	int d:30;
};
int main()
{
	struct A m;
	printf("%d\n",sizeof(m));  //为什么是8？具体见鹏哥视频 位段15分钟处 
	return 0;
		
}
