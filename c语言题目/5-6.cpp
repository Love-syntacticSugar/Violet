#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	b=a%3,c=a%5;
	if (b!=0)
	printf("No\n");
	else if (c!=0)
	printf("No\n");
	else
	printf("Yes\n");
	return 0;
	
}
