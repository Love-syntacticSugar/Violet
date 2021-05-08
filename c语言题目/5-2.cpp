#include<stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	temp=a;
	if (a<b)
	a=b;
	b=temp;
	printf("%d %d\n",a,b);
	return 0;
	
}
