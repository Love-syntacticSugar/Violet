// ���Ͼ���  ����ⷨ
//���Ͼ���ÿ�д����ҵ�����ÿ�д��ϵ���Ҳ����
//���д�����������Ͼ����в���ĳ�������Ƿ���ڣ������ڣ����ӡ���±�
//Ҫ��ʱ�临�Ӷ�С��O(N)
 
/*˼·���������Ͻǵ�����Ϊ a �����ҵ�����Ϊ n 
		��a>n,���ų�a��һ����
		��a<n,���ų�a��һ����
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
	printf("��������Ҫ���ҵ�����");
	int arr[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,151,61,114,35,58,23,55,634,67,636,363};
	int k = 0;
	int x = 5;
	int y = 5;
	
	scanf("%d",&k);
	
	int ret = FindNumber(arr,k,&x,&y);            //����ĵĴ�ַ��һʯ�����Ч�����ȴ��������ֿ��԰��ҵ������±��ӡ���� 
	if(ret == 1)
	{
		printf("�ҵ������±��ǣ�%d %d\n",x,y);
	}
	else
	{
		printf("�Ҳ�����\n");
	}
	return 0;
	
}
  
