//���� ���ַ� ��������n���±� 
#include<stdio.h>

int main()
{
	int n;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = 0;
	int mid = 0;
	
	printf("����������Ҫ���ҵ����֣�");
	scanf("%d",&n); 
	right = sizeof(a) / sizeof(a[0]) - 1;
	
	while(1)      
	{
		mid = (right + left)/2;           //�����䲻�Ƶ�while���������ж�������֪���� ���ɼ�c������ɢ֪ʶ��--�״�㣩 
		if(left <= right)
		{
			if(n < a[mid])
			{
				right = mid-1;           
			}
			else if(n > a[mid])
			{
				left = mid+1;          //  1.OW����ʱ��û��һ���⵼�¶����غ����֪�����������10��������������Ͷ���   2.���������һ��ĺ������ 
			}
			else 
			{
				printf("����%d���±���%d\n",n,mid);
				break;
			}
		}
		else
		{
			printf("���޴���\n");
			break;
		}
	}
	return 0;
}
