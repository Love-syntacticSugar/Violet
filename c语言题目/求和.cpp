#include<stdio.h>
int main()
{
	int i,s=0;
	for(i=1;;i++)
	{
		s+=i; 
		if(s>1000)
		{
			break;
		}
	}
	printf("%d\n",i);
	return 0;
}
