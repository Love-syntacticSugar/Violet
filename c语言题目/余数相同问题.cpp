#include<stdio.h>
int main()
{
	int a,b,c,x=2,d,e,f;
	scanf("%d%d%d",&a,&b,&c);
	for (;x>1;x++)
	{
		d=a%x,e=b%x,f=c%x;
		if (d==e&&e==f)
		{
			printf("%d\n",x);
			break;                 //��������if���棬��ȴ������ֹforѭ��  //��һ���Լ���ͦ����������Ĵ��� 
		}
		
	}
	return 0;
	
}
