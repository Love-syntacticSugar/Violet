/* memmove
	处理内存重叠情况
*/

#include<stdio.h>
#include<string.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	
	memmove(arr,arr+2,20);
	
	for(i = 0;i < 10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
 } 
