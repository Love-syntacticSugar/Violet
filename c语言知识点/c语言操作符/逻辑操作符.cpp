#include<stdio.h>
int main()
{
	int a = 0;
	int b = 5;
	int c = a&&b;   //������Ϊ��c = 1������c = 0 
	int d = a||b;	//������ 
	
	printf("%d\n",c);
	printf("%d\n",d);
	
	return 0;
}
