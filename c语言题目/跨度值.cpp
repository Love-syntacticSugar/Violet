#include<stdio.h>
int main()
{
	int n,i,max=0,min=100,v;      //这里的max和min很巧妙 
	scanf("%d",&n);
	int a[n];                  //等下可以试试放scanf前面估计不行，和之前同理(没试，怕把电脑搞坏) 
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);         //此题OW认为精华部分：for循环里加scanf以至可以输入数值  
	 } 
	 for (i=0;i<n;i++)               //从这里开始a[i]是已经储存了对应的值了的，不再是变量。这也是计算机的好处，它是从上到下计算的，前面的数值储存了就是储存了(有点绕，ayk) 
	 {
	 	if (max<a[i])
		 {
		 	max=a[i];
			 }	
	 }
	 for (i=0;i<n;i++)
	 {
	 	if (min>a[i])
		 {
		 	min=a[i];
			 }	
	 }
	 v=max-min;
	 printf("最大跨度值为%d",v);
	 return 0;
	
}
