/* memcmp
	1.�Ƚϵ����ڴ� 
	2.��ͬ����0   ���ڷ���>0��ֵ   С�ڷ���<0��ֵ 
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
