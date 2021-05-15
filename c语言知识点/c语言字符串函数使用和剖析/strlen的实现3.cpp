//法三AS-----循环 

#include<stdio.h>

int get_long(char* p);
int get_long(char* p)
{
	int n = 0;            
	while(*p != '\0')          //所以你还认为for循环无敌吗？你老惦记你那个for循环干什么呢？ 
	{
		n++;
		p++;	
	}

	return n;
}

int main()
{
	char a[100];
	int b = 0;
	
	scanf("%s",a);
	
	b = get_long(a);
	
	printf("%d\n",b);
	
	return 0;
}
