#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5};
	short* p = (short*)arr;
	int i = 0;
	for(i = 0;i<4;i++)
	{
		*(p + i) = 0;          //shout*һ�η���2���ֽڣ��������ѭ���ܹ�������8���ֽڣ�����ֻ�ܸ�ǰ����Ԫ�ظ�ֵ������һ��һ�븳ֵ��ȻҲ�У�Ҫ�ﵽ�ܸߵĸ߶ȹ��Ʋ�����⣩ 
	 } 
	 
	 for(i = 0;i<5;i++)
	 {
	 	printf("%d\n",arr[i]);
	 }
	 
	 return 0;
}
