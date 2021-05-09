#include<stdio.h>
int* sum(int x,int y);
int* sum(int x,int y)
{
	int s;
	s = x + y;
	return &s;
}
int main()
{
	int* r = sum(10,9);
	printf("%d\n",*r);
	return 0;
	
}

//更实用的是返回一个指向数组的指针，这样就实现了返回值为数组 
