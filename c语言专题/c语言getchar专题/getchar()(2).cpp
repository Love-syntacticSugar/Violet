#include<stdio.h>
int main()
{
    int a;
    
   	a = getchar();    //因为getchar()的返回值是对应字母的ASC||值，是一个整形 
   	
   	printf("%c\n",a);
   	printf("%d\n",a);
   	
	return 0;
}    
