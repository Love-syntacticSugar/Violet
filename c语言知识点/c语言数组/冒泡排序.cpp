#include<stdio.h>

void bobble_sort(int* a,int n);
void bobble_sort(int* a,int n)
{
	for(int i = 0;i < n-1;i++)          //确定冒泡排序的总趟数 
	{
		int flag = 1;                  //为了提高效率，假设这一趟要排序的数据已经有序 
		
		for(int j = 0;j < n-1-i;j++)   //每一趟冒泡排序 
		{
			if(a[j] > a[j+1])
			{
				int temp;
				
				temp = a[j+1];
				
				a[j+1] = a[j];
				
				a[j] = temp;
				
				flag = 0;	       //表明本趟排序的数据不是完全有序的 
			}
		}
		if(flag == 1)
		{
			break;
		}
	}	
}

int main()
{
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int n;
	
	n = sizeof(arr)/sizeof(arr[0]);
	
	bobble_sort(arr,n);
	
	for(int i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}

