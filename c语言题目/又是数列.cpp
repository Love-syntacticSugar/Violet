#include<math.h>
#include<stdio.h>
int main()
{
	int i,n=0;
	for(i=0;i<30;i++)
	{
		n+=pow(2,i);
		printf("%d ",n);        //位宽除了用空格还可以用什么？%-2d不可以，因为它是从第一位数开始算的，所以位数一多，空格就被数字占据了 
	}
	return 0;
	
 } 
