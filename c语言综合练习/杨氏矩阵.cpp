// 杨氏矩阵  经典解法
//杨氏矩阵：每行从左到右递增，每列从上到下也递增
//请编写函数，在杨氏矩阵中查找某个数字是否存在，若存在，请打印出下标
//要求：时间复杂度小于O(N)
 
/*思路：设最右上角的数字为 a ，查找的数字为 n 
		若a>n,则排除a那一整列
		若a<n,则排除a那一整行
*/		
 
#include<stdio.h>

int FindNumber(int (*p)[5],int k,int* px,int* py);
int FindNumber(int (*p)[5],int k,int* px,int* py)
{
	int x = 0;
	int y = *py - 1;
	
	while(x <= *px - 1 && y >= 0)
	{
		if(p[x][y] > k)
		{
			y--;
		}
		else if(p[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
		
	}
	return 0;
}

int main()
{
	printf("请输入你要查找的数：");
	int arr[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,151,61,114,35,58,23,55,634,67,636,363};
	int k = 0;
	int x = 5;
	int y = 5;
	
	scanf("%d",&k);
	
	int ret = FindNumber(arr,k,&x,&y);            //这里的的传址有一石二鸟的效果：既传了行列又可以把找到数的下标打印出来 
	if(ret == 1)
	{
		printf("找到啦！下标是：%d %d\n",x,y);
	}
	else
	{
		printf("找不到！\n");
	}
	return 0;
	
}
  
