//����OW��һ���������ģ����Ǵ��ˣ���Ϊ��Ŀ���ô�����ʱ���� 
//��һ 


#include<stdio.h>

int n = 0;                  //��һ����ᵽȫ�ֱ�����ˬ������

int get_long(char* p);
int get_long(char* p)
{       
	if(*p != '\0')
	{
		n += 1;
		get_long(p + 1);	
	}
	else
	{
		n += 0;
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
















