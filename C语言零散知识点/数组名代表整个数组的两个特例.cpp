#include<stdio.h>
void bobble_sort(int a[]);              ///定义函数参数时可以直接用 int a[] ！！ 
void bobble_sort(int a[])       
{
	int sz = sizeof(a) / sizeof(a[0]);
	         
	printf("%d\n",sizeof(a));			//IM！！！（对比24行）打印出8，因为传过来的是首元素的地址，可以看作指针，而我的电脑是64进制的，所以是8 
	printf("%d\n",sz);	                        //打印出2 ，因为8/2 

}

int main()
{
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int sz;	
	int c; 
	int d;
	
	sz = sizeof(arr)/sizeof(arr[0]);
	c = sizeof(arr[0]);	
	d = sizeof(arr);

	printf("%d\n",c);                       //注意！printf("%d\n",sizeof(arr[0])); 不可以，会报错 
	printf("%d\n",d);                   //IM！！！（对比7行）打印出40，因为sizeof内部单独放一个数组名，数组名表示整个数组，7行和24行的数组名有本质区别 
	printf("%d\n",sz);						//打印出10，因为40/4 

	
	bobble_sort(arr);
	
	return 0;
}
/* 总结：数组名代表这个数组的两种情况 
1. sizeof内部单独放一个数组名，数组名表示整个数组
2. &数组名（老生常谈的东西了） 
*/
