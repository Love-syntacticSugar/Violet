#include<stdio.h>
void swap(int x,int y);
void swap(int x,int y)
{
	int temp;
	printf("In swap,before swap:%d %d\n",x,y);
	temp = x;
	x = y;
	y = temp;
	printf("In swap,after swap:%d %d\n",x,y);
}
int main()
{
	int x = 3,y = 5;
	printf("In main,before swap:%d %d\n",x,y);
	swap(x,y);
	printf("In main,after swap:%d %d\n",x,y);         
}

/* 发现了吗？printf("In main,after swap:%d %d\n",x,y);的打印结果还是3 5，并没有交换。
   why？
   知识点：每个函数都有独立的作用域
   解释：每个函数之间都是相互独立的，不同函数之间不能“访问”对方的变量。所以swap里xy的值变了却不影响main里面xy的值，因为main没有权限去看xy最终变成了多少，swap也没办法告诉mainxy变了 
          （这里杠精会说swap访问了xy的值，那不叫访问，那是你主动告诉它的，它是被迫接受的，是你给了它权限让它用一用main里面xy的值） 
*/
