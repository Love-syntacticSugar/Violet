//整形数组+sizeof

#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8};
	
	printf("%d\n",sizeof(arr));			//arr代表整个数组 
	printf("%d\n",sizeof(arr+0));		//1. arr代表首元素地址，因为这里进行运算了（反正除了第一种和 &arr剩下的都代表首元素的地址） 2.sizeof计算地址大小的时候就是4\8，就把地址当指针看就行 
	printf("%d\n",sizeof(*arr));	
	printf("%d\n",sizeof(arr[1]));	
	printf("%d\n",sizeof(&arr));	   //看到地址想到都不用想就是 4\8(底下也一样) 
	printf("%d\n",sizeof(*&arr));		//*&arr = arr 
	printf("%d\n",sizeof(&arr+1));	
	printf("%d\n",sizeof(&arr[0]));
	printf("%d\n",sizeof(&arr[0]+1));	
	
	return 0;		
} 
