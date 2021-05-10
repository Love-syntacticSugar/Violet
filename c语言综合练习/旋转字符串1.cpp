//旋转字符串：例如ABCDEF--->CDEFAB（旋转2个字符串） 
//法一：ow    通过把要旋转的字符串临时储存在一个字符数组里的方法 

#include<stdio.h>

void swap_c(char* p,int k,int sz);
void swap_c(char* p,int k,int sz)
{
	int m = 0;             //第二个循环要用 
	char tmp[100];
	
	for(int i = 0;i < k;i++)
	{
		tmp[i] = p[i];         //要旋转的字符串临时储存在一个字符数组里
	}
	
	for(int j = k;j < sz-1;j++)
	{
		p[m] = p[j];            //把不用旋转的字符串移到前面 
		m++;
	}
		
	for(int n = 0;m < sz-1;n++)
	{
		p[m] = tmp[n];          //把要旋转的字符串放进剩下的位置 
		m++;
	}
}

int main()
{
	printf("Inputing the number you want to revolve:");
	
	char a[] = "abcdefg";
	int sz = sizeof(a) / sizeof(a[0]);
	int k = 0;
	
	scanf("%d",&k);
	
	if(k > sz-1)
	{
		printf("The number you have input is wrong!\n");
	}
	else
	{
		swap_c(a,k,sz);
		printf("%s\n",a);
	}
	
	return 0;
}
