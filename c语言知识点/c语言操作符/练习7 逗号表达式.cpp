//c的值？ 

#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	
	int c = (a>b,a=b+10,a,b=a+1);     //逗号表达式执行最后一个表达式的结果，但并不意味着中间就不用计算了，比如此例：a>b确实没有意义，但是a=b+10是有意义的！ 
	
	printf("%d\n",c);
	
	return 0; 
}

//补例：if(a=b+1,c+a/2,d>0) 也是执行最后一句 
