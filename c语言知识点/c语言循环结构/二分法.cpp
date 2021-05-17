//运用 二分法 查找数字n的下标 
#include<stdio.h>

int main()
{
	int n;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = 0;
	int mid = 0;
	
	printf("请输入你想要查找的数字：");
	scanf("%d",&n); 
	right = sizeof(a) / sizeof(a[0]) - 1;
	
	while(1)      
	{
		mid = (right + left)/2;           //这个语句不移到while里面来又有多严重你知道吗？ （可见c语言零散知识点--易错点） 
		if(left <= right)
		{
			if(n < a[mid])
			{
				right = mid-1;           
			}
			else if(n > a[mid])
			{
				left = mid+1;          //  1.OW做的时候没加一，这导致多严重后果你知道吗？输入大于10的数字在算算你就懂了   2.而且这个加一真的很巧妙！！ 
			}
			else 
			{
				printf("数字%d的下标是%d\n",n,mid);
				break;
			}
		}
		else
		{
			printf("查无此数\n");
			break;
		}
	}
	return 0;
}
