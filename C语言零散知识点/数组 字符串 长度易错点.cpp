#include<stdio.h>
#include<string.h>

int main()
{
	int a[4];                 //��������4������ 
	char b[4] = "abc";        //ֻ����3���ַ� 
	
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(b));    //����'\n' 
	
	printf("%d\n",strlen(b));    // 1.������'\n'   2.���ܼ��������С��ֻ�ܼ����ַ������� 
	
	return 0;
}
