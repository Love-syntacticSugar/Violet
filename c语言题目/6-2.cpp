#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,BMI;                       //�ٶ�˵Ҫ��pow����������Ҫ˫���ȣ�����������double����Ϊ����̫�󷴶��жϲ���������� 
	printf("���(m):");
	scanf("%f",&a);
	getchar ();                              //����û��Ҳ���ԡ� 
	printf("����(kg):");
	scanf("%f",&b);
	c=pow(a,2);
	BMI=b/c;
	if (BMI<18.5)
	{
		printf("ƫ��\n");
	}
	else if (BMI>=18.5&&BMI<24)
	{
		printf("����\n");
	}
	else if (BMI>=24&&BMI<28)
	{
		printf("ƫ��\n");
	}
	else if (BMI>=28&&BMI<40)
	{
		printf("����\n");
	}
	else
	{
		printf("�ضȷ���\n");
	}
	return 0;
}
