//�ص�����    �����ķ�װ 

#include<stdio.h>

void menu();
void menu()
{
	printf("******************************\n");
	printf("*** 1-->Add     2-->Sub ******\n");
	printf("***                     ******\n");
	printf("*** 3-->Mul     4-->Div ******\n");
	printf("******************************\n");
}

int Add(int a,int b);
int Add(int a,int b)
{
	return a+b;
}

int Sub(int a,int b);
int Sub(int a,int b)
{
	return a-b;
}

int Mul(int a,int b);
int Mul(int a,int b)
{
	return a*b;
}

int Div(int a,int b);
int Div(int a,int b)
{
	return a/b;
}

void Calc(int (*pf)(int,int));
void Calc(int (*pf)(int,int))
{
	int x = 0;
	int y = 0;
	printf("��������Ҫ��������֣�");
	scanf("%d%d",&x,&y);
	printf("%d\n",pf(x,y));
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		
		switch(input)
		{
			case 1:
				Calc(Add);
				break;
			case 2:
				Calc(Sub);
				break;
			case 3:
				Calc(Mul);
				break;
			case 4:
				Calc(Div);
				break;
			default:
				printf("ѡ�����");
				break;
		}
	}while(input);	

	return 0;
}
