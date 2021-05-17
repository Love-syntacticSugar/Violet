//将一个数组前半部分放奇数，后半部分放偶数（不要求顺序，分开即可） 
// 法一 OW 

#include<stdio.h>

void swap_(int* p,int sz);
void swap_(int* p,int sz)
{
	int i = 0;
	int tmp = 0;
	
	for(i = 0;i < sz;i++)
	{
		if(p[i] % 2 != 0)
		{
			continue;
		}
		else
		{
			for(int j = sz-1;j > i;j--)
			{
					if(p[j] % 2 == 0)
					{
						sz -= 1;
						continue;
					}
					else
					{
						sz -= 1;
						tmp = p[j];
						p[j] = p[i];
						p[i] = tmp;
						break;	
					}
			}	
		}
	}	
}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(a) / sizeof(a[0]);
	
	swap_(a,sz);
	
	for(int i = 0;i < sz;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
	
}

