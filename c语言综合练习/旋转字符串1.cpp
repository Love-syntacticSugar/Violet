//��ת�ַ���������ABCDEF--->CDEFAB����ת2���ַ����� 
//��һ��ow    ͨ����Ҫ��ת���ַ�����ʱ������һ���ַ�������ķ��� 

#include<stdio.h>

void swap_c(char* p,int k,int sz);
void swap_c(char* p,int k,int sz)
{
	int m = 0;             //�ڶ���ѭ��Ҫ�� 
	char tmp[100];
	
	for(int i = 0;i < k;i++)
	{
		tmp[i] = p[i];         //Ҫ��ת���ַ�����ʱ������һ���ַ�������
	}
	
	for(int j = k;j < sz-1;j++)
	{
		p[m] = p[j];            //�Ѳ�����ת���ַ����Ƶ�ǰ�� 
		m++;
	}
		
	for(int n = 0;m < sz-1;n++)
	{
		p[m] = tmp[n];          //��Ҫ��ת���ַ����Ž�ʣ�µ�λ�� 
		m++;
	}
}

int main()
{
	printf("Inputing the number you want to revolve:");
	
	char a[] = "abcdefg";
	int sz = sizeof(a) / sizeof(a[0]);
	int k = 0;
	
	scanf("%d",&k);
	
	if(k > sz-1)
	{
		printf("The number you have input is wrong!\n");
	}
	else
	{
		swap_c(a,k,sz);
		printf("%s\n",a);
	}
	
	return 0;
}
