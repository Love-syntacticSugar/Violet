//����ʱ��Ӧ������Ҫ��ͬ������arr2Ҫ����test4�� 

#include<stdio.h>

void test1(int arr[])
{}
void test2(int arr[10])        //���Լ�Ҳ���Բ��ӣ�����ν 
{}
void test3(int* arr)
{}
void test4(int* arr[])         //ָ��������ָ������������ 
{}
void test5(int** arr)			// ���ָ��ĵ�ַ 
{}

int main()
{
	int arr1[10] = {0};
	int* arr2[20] = {0};
	
	test1(arr1);
	test2(arr1);
	test3(arr1);
	
	test4(arr2);
	test5(arr2);
	
	return 0;
}
