#include<stdio.h>
int test(int b[10]);
int test(int b[10])
{
	int i;
	for(i = 0;i < 10;i++)
	{
		b[i] += 1;
		printf("%d ",b[i]);                   //注意，由于数组是紧密连着的，所以知道首地址之后就可以“顺藤摸瓜”知道所有的数值 
	}
}
int main()
{
	int a[10] = {2,4,6,8,10,12,14,1,6,5};
	test(a);                                //以数组作为形参时，传的不是值而是址。挺好理解的，因为a代表的是数组a[10]的第一个数的地址 
	putchar('\n');
	printf("%d",a[0]);                      //因为传的是地址，所以test函数里面数组改的值在 main里也会改 
	return 0;	                               
}
