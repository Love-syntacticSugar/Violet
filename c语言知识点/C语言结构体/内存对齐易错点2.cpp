#include<stdio.h>
struct C
{
	char a[123];      //��������1���������� ���ͼ��� 
	int b;
};

int main()
{	
	printf("%d\n",sizeof(C));
	return 0;	
}

/*����֮��
���鲢��һ���������ͣ�������������������char��char�Ķ��볤����1
					ͬ��������int a[123],����볤����4 
*/
