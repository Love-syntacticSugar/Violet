#include<stdio.h>
int main()
{
	int a,b,ret;
	printf("%d\n",printf("%d\n",printf("%d\n",43)));
	/*解释：
	要执行第一个printf，就要知道第二个printf的返回值（注意！返回值是返回值，打印是打印，两个是不一样的事情）
	而要知道第二个printf的返回值，就需要知道第三个printf的返回值 
	第三个printf的返回值是什么呢？AS是3.为什么？因为printf的返回值等于打印的数字的个数，注意包括'\0'
	但仍然需要注意的是：printf也是执行了的，所以先打印出了43
	因为第三个printf的返回值是3，所以第二个printf的返回值是2，同时也打印了3这个数字
	因为第二个printf的返回值是2，所以第一个printf打印了2这个数字	 
	*/	
	return 0;
}
