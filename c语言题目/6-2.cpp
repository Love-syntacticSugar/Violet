#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,BMI;                       //百度说要用pow函数，就需要双精度，这题我试了double，因为精度太大反而判断不出来结果。 
	printf("身高(m):");
	scanf("%f",&a);
	getchar ();                              //这里没有也可以。 
	printf("体重(kg):");
	scanf("%f",&b);
	c=pow(a,2);
	BMI=b/c;
	if (BMI<18.5)
	{
		printf("偏瘦\n");
	}
	else if (BMI>=18.5&&BMI<24)
	{
		printf("正常\n");
	}
	else if (BMI>=24&&BMI<28)
	{
		printf("偏胖\n");
	}
	else if (BMI>=28&&BMI<40)
	{
		printf("肥胖\n");
	}
	else
	{
		printf("重度肥胖\n");
	}
	return 0;
}
