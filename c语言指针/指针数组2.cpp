#include<stdio.h>
int main()
{
	char* arr[5];
	char* (*pa)[5] = &arr;     //难点！为什么是char*而不是char呢？    char代表pa指向的数组的元素类型是char*（就是这个指针不是指向数组就好了，还要管数组里面的元素种类） 
	
	return 0;	
}

