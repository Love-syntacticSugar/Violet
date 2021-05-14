#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5};
	short* p = (short*)arr;
	int i = 0;
	for(i = 0;i<4;i++)
	{
		*(p + i) = 0;          //shout*一次访问2个字节，所以这个循环总共访问了8个字节，所以只能给前两个元素赋值（这种一半一半赋值居然也行，要达到很高的高度估计才能理解） 
	 } 
	 
	 for(i = 0;i<5;i++)
	 {
	 	printf("%d\n",arr[i]);
	 }
	 
	 return 0;
}
