//����AS-----ѭ�� 

#include<stdio.h>

int get_long(char* p);
int get_long(char* p)
{
	int n = 0;            
	while(*p != '\0')          //�����㻹��Ϊforѭ���޵������ϵ�����Ǹ�forѭ����ʲô�أ� 
	{
		n++;
		p++;	
	}

	return n;
}

int main()
{
	char a[100];
	int b = 0;
	
	scanf("%s",a);
	
	b = get_long(a);
	
	printf("%d\n",b);
	
	return 0;
}
