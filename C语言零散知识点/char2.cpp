#include<stdio.h>
int main()
{
	int a;
	int b;
	 
	a = 65;
	b = 'A';      //离谱：给int赋值字符（对比char1）       在计算机里，A不仅仅是A，它也是65(asc||)的意思。  
	                  
	printf("%c\n",a);   //此时，计算机会寻找65对应的字符值（65是ASC||值） 
	printf("%d\n",a);
	
	printf("%c\n",b);   
	printf("%d\n",b);   //此时，计算机会寻找'A'对应的ASC||值 
	
	return 0;
}	                       
