/* 1.strcpy strcat strcmp strmcpy strncat strncmp ����������:�ַ�����\0
     memcpy memmove memcmp memset �������� ���������� �ṹ������       �������Ƕ��ڴ���в����� 
memcpy.
void��memcpy ( void destination, const void �� source, size_t num);
����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
���������������\O����ʱ�򲢲���ͣ������
*/

#include<stdio.h>
#include<string.h>

struct S
{
	char name[20];
	int age;
};

int main()
{	
	struct S arr3[] = {"����",20,"����",30};
	struct S arr4[5] = {0};
	
	struct S* p = arr4;
	
	memcpy(arr4,arr3,sizeof(arr3));
	
	printf("%s %d %s %d\n",p->name,p->age,(p+1)->name,(p+1)->age);
	
	return 0;
}
