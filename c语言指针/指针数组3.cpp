//传参时对应的类型要相同（比如arr2要传给test4） 

#include<stdio.h>

void test1(int arr[])
{}
void test2(int arr[10])        //可以加也可以不加，无所谓 
{}
void test3(int* arr)
{}
void test4(int* arr[])         //指针数组用指针数组来接收 
{}
void test5(int** arr)			// 存放指针的地址 
{}

int main()
{
	int arr1[10] = {0};
	int* arr2[20] = {0};
	
	test1(arr1);
	test2(arr1);
	test3(arr1);
	
	test4(arr2);
	test5(arr2);
	
	return 0;
}
