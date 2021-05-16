#include<stdio.h>
enum Sex 
{
	male,   	 //用逗号！ 
	female,
	secret    	//这里逗号加不加无所谓 
};

int main()
{
	enum Sex s = male;  				//只能赋值Sex里面的内容 
	printf("%-2d%-2d%-2d\n",male,female,secret);	
	return 0;
}

/*  枚举的优点(应试)
为什么使用枚举？
我们可以使用#define定义常量，为什么非要使用枚举？枚举的优点：
1.增加代码的可读性和可维护性
2.和#define定义的标识符比较枚举有类型检查，更加严谨。
3.防止了命名污染(封装)
4.便于调试
5.使用方便，一次可以定义多个常量
*/


