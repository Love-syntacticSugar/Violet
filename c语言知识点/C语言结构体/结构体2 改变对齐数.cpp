#include<stdio.h>

#pragma pack(4)      //��ʼ��λ��     һ�㶨��2�ı��� 
struct S
{
	char c1;
	double d;
};
#pragma pack()       //��ֹ����˼ 
int main()
{
	printf("%d\n",sizeof(struct S));
	return 0;
}
