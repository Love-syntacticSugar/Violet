#include<stdio.h>
void bobble_sort(int a[]);              ///���庯������ʱ����ֱ���� int a[] ���� 
void bobble_sort(int a[])       
{
	int sz = sizeof(a) / sizeof(a[0]);
	         
	printf("%d\n",sizeof(a));			//IM���������Ա�24�У���ӡ��8����Ϊ������������Ԫ�صĵ�ַ�����Կ���ָ�룬���ҵĵ�����64���Ƶģ�������8 
	printf("%d\n",sz);	                        //��ӡ��2 ����Ϊ8/2 

}

int main()
{
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int sz;	
	int c; 
	int d;
	
	sz = sizeof(arr)/sizeof(arr[0]);
	c = sizeof(arr[0]);	
	d = sizeof(arr);

	printf("%d\n",c);                       //ע�⣡printf("%d\n",sizeof(arr[0])); �����ԣ��ᱨ�� 
	printf("%d\n",d);                   //IM���������Ա�7�У���ӡ��40����Ϊsizeof�ڲ�������һ������������������ʾ�������飬7�к�24�е��������б������� 
	printf("%d\n",sz);						//��ӡ��10����Ϊ40/4 

	
	bobble_sort(arr);
	
	return 0;
}
/* �ܽ᣺������������������������� 
1. sizeof�ڲ�������һ������������������ʾ��������
2. &��������������̸�Ķ����ˣ� 
*/
