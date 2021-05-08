#include<stdio.h>
int main()
{
	float a;
	scanf("%f",&a);
	if (a<=25)
	printf("%.2lf\n",a*1.68);
	else
	printf("%.2lf\n",1.68*25+(a-25)*1.98);
	return 0;
}
