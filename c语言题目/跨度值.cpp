#include<stdio.h>
int main()
{
	int n,i,max=0,min=100,v;      //�����max��min������ 
	scanf("%d",&n);
	int a[n];                  //���¿������Է�scanfǰ����Ʋ��У���֮ǰͬ��(û�ԣ��°ѵ��Ը㻵) 
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);         //����OW��Ϊ�������֣�forѭ�����scanf��������������ֵ  
	 } 
	 for (i=0;i<n;i++)               //�����￪ʼa[i]���Ѿ������˶�Ӧ��ֵ�˵ģ������Ǳ�������Ҳ�Ǽ�����ĺô������Ǵ��ϵ��¼���ģ�ǰ�����ֵ�����˾��Ǵ�����(�е��ƣ�ayk) 
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
	 printf("�����ֵΪ%d",v);
	 return 0;
	
}
