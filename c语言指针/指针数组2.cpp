#include<stdio.h>
int main()
{
	char* arr[5];
	char* (*pa)[5] = &arr;     //�ѵ㣡Ϊʲô��char*������char�أ�    char����paָ��������Ԫ��������char*���������ָ�벻��ָ������ͺ��ˣ���Ҫ�����������Ԫ�����ࣩ 
	
	return 0;	
}

