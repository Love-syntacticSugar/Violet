#include<stdio.h>
int main()
{
	int i;             
	float a,n=0,sum=0;
	for(i=0;n!=-1;i++)
	{
		scanf("%f",&n);
		sum+=n;                 //叠加百用不厌
	 } 
	 a=(sum+1)/(i-1);              //之前这里死活不理解为什么i-1，基础还是不扎实。在执行完循环体内容后，是先执行表达式3，而不是2。所以这里i最终等于5 
	 printf("平均分是：%g\n",a);     //%g可以忽略小数点后面的0000 
	 return 0;
	 
}
