/*方法：
	dest地址在src地址前面时，src从前往后给dest赋值 
	dest地址在src地址后面时，src从后往后给dest赋值 
*/

#include<stdio.h>
#include<assert.h>

int* my_memmove(int* dest,const int* src,size_t sz);
int* my_memmove(int* dest,const int* src,size_t sz)
{
	assert(dest && src);
	
	if(dest == src)
	{
		return dest;
	}
	else if(dest < src)
	{
		int n = 0;
		while(n < sz/4)
		{
			*dest = *src;
			dest++;
			src++;
			n++;
		}
		return dest;
	}
	else
	{
		int m = 0;
		dest = dest+sz/4-1;
		src = src+sz/4-1;
		while(m < sz/4)
		{
			*dest = *src;
			dest--;
			src--;
			m++;
		}
		return dest;
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	
	my_memmove(arr+3,arr,20);
	
	for(i = 0;i < 10;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
 } 
