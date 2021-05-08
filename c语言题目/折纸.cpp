#include<stdio.h>
int main()
{
	int i;
	float h=0.01;
	for(i=1;h<8848;i++)
	{
		h*=2;
		printf("%d %g\n",i,h);
	}
	printf("对折%d次，可以达到珠穆朗玛峰的高度",i-1);
	return 0;
}
