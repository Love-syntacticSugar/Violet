#include<stdio.h>             //1.while 2.do..while  3.for
int main()
{
	int a=1,sum=0;
	while(a<=100)
	{
		sum+=a;
		a+=1;
	}
	printf("%d\n",sum);
	return 0;
	
	
}
