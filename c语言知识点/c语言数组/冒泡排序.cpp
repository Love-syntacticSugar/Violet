#include<stdio.h>

void bobble_sort(int* a,int n);
void bobble_sort(int* a,int n)
{
	for(int i = 0;i < n-1;i++)          //ȷ��ð������������� 
	{
		int flag = 1;                  //Ϊ�����Ч�ʣ�������һ��Ҫ����������Ѿ����� 
		
		for(int j = 0;j < n-1-i;j++)   //ÿһ��ð������ 
		{
			if(a[j] > a[j+1])
			{
				int temp;
				
				temp = a[j+1];
				
				a[j+1] = a[j];
				
				a[j] = temp;
				
				flag = 0;	       //����������������ݲ�����ȫ����� 
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

