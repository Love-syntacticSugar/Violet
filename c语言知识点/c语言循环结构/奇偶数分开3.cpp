//  AS 

#include<stdio.h>

void swap_(int* p,int sz);
void swap_(int* p,int sz)
{
	int left = 0;
	int right = sz - 1;
	while(left < right)
	{
		while((left<right) && (p[left] % 2 ==1))
		{
			left++;
		}
		while((left<right) && (p[right] % 2 == 0))
		{
			right--;
		}
		if(left < right)
		{
			int tmp = p[left];
			p[left] = p[right];
			p[right] = tmp;
		}
	}
}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10,1,52,52,547,85};
	int sz = sizeof(a) / sizeof(a[0]);
	
	swap_(a,sz);
	
	for(int i = 0;i < sz;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
	
}
