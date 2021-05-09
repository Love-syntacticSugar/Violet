//二维数组+sizeof 

#include<stdio.h>

int main()
{
	int a[3][4] = {0};
	
	printf("%d\n",sizeof(a));           //不是首元素的地址！很特殊！代表整个数组！  ---48 
	printf("%d\n",sizeof(a[0][0]));     //                                          ----4
	printf("%d\n",sizeof(a[0]));		//也不是首元素地址！！也是代表整个数组！！  ---16
	printf("%d\n",sizeof(a[0]+1));		// = &a[0][1]                               ----8
	printf("%d\n",sizeof(*(a[0]+1)));	// = a[0][1]                                ----4
	printf("%d\n",sizeof(a+1));			// = &a[1]                                  ----8
	printf("%d\n",sizeof(*(a+1))); 		// = a[1]                                   ---16 
	printf("%d\n",sizeof(&a[0]+1));		// = &a[1]                                  ----8 
	printf("%d\n",sizeof(*(&a[0]+1)));	// = a[1]                                   ---16	
	printf("%d\n",sizeof(*a));			// = a[0]                                   ---16
	printf("%d\n",sizeof(a[3]));		//                                          ---16
	
	return 0;
}
