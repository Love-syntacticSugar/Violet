#include<stdio.h>
struct Book
{
	char name[20];
	int price;
};
int main()
{
	struct Book book1 = {"c����",22
	};
	struct Book* p = &book1;
	
	//  .���÷����ṹ�����.��Ա 
	printf("%s\n",book1.name);
	printf("%d\n",book1.price);
	
	//  ->���÷����ṹ��ָ��->��Ա 
	printf("%s\n",p->name);
	printf("%d\n",p->price);
	return 0;
}

/* ���䣺��Ҫ�ı�book1�е�ֵ��������ע��� 
	1. book1.price = 55��  ���÷���ȷ����Ϊ book1.priceΪ��ֵ�����Կ��Ըı�
	2. book1.name = "c++"�� ���÷�������Ϊbook1.name�������ַ���ַ���ǳ��������ɸı䣬Ҳ�������ֵ�����Բ��ܸ�����ֵ
		��Ҫ��ô���ı�book1.name��ֵ�أ�
		��Ҫ�õ� �⺯��string.h�е��ַ�����������strcpy()�������÷����£�
		strcpy(book1.name,"c++"); 
*/
