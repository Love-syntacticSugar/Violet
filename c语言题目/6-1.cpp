 #include<stdio.h>
int main()
{
	printf("������һ����ݣ�"); 
	int a,b,c,d;
	scanf("%d",&a);
	b=a%100,c=a%4,d=a%400;
	if (c==0)
	{
		if (b==0)
		{
			if (d==0)
			{
				printf("%d������\n",a);
			}
			else
			{
			printf("%d��ƽ��\n",a);
			}
		}
		else
		{
			printf("%d������\n",a);
		}
	}
	else
	{
		printf("%d��ƽ��\n",a);
	}
	return 0;
}
