/* memcmp
	1.比较的是内存 
	2.相同返回0   大于返回>0的值   小于返回<0的值 
*/

#include<stdio.h>
#include<string.h>

int main()
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {1,2,5,4,3};
	
	int ret = memcmp(arr1,arr2,9);
	// 01 00 00 00 02 00 00 00 03 00 00 00 ...
	// 01 00 00 00 02 00 00 00 05 00 00 00 ...
	
	printf("%d\n",ret);
	
	return 0;
}
