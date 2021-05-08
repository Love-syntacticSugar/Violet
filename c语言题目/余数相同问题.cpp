#include<stdio.h>
int main()
{
	int a,b,c,x=2,d,e,f;
	scanf("%d%d%d",&a,&b,&c);
	for (;x>1;x++)
	{
		d=a%x,e=b%x,f=c%x;
		if (d==e&&e==f)
		{
			printf("%d\n",x);
			break;                 //尽管输在if里面，但却可以终止for循环  //夸一下自己，挺聪明的这里的处理 
		}
		
	}
	return 0;
	
}
