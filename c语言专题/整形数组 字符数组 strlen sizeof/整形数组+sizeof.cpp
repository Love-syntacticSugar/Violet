//��������+sizeof

#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8};
	
	printf("%d\n",sizeof(arr));			//arr������������ 
	printf("%d\n",sizeof(arr+0));		//1. arr������Ԫ�ص�ַ����Ϊ������������ˣ��������˵�һ�ֺ� &arrʣ�µĶ�������Ԫ�صĵ�ַ�� 2.sizeof�����ַ��С��ʱ�����4\8���Ͱѵ�ַ��ָ�뿴���� 
	printf("%d\n",sizeof(*arr));	
	printf("%d\n",sizeof(arr[1]));	
	printf("%d\n",sizeof(&arr));	   //������ַ�뵽����������� 4\8(����Ҳһ��) 
	printf("%d\n",sizeof(*&arr));		//*&arr = arr 
	printf("%d\n",sizeof(&arr+1));	
	printf("%d\n",sizeof(&arr[0]));
	printf("%d\n",sizeof(&arr[0]+1));	
	
	return 0;		
} 
