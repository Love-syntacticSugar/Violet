//字符指针+sizeof

#include<stdio.h>
int main()
{
	char* p = "abcde";
	
	printf("%d\n",sizeof(p));	    //和字符串+sizeof对比，贼的很	
	printf("%d\n",sizeof(p+1));	    //地址就是地址，管你什么花里胡哨的 
	printf("%d\n",sizeof(*p));	
	printf("%d\n",sizeof(p[0]));	
	printf("%d\n",sizeof(&p));	  
	printf("%d\n",sizeof(&p+1));	
	printf("%d\n",sizeof(&p[0]+1));	
	
	return 0;
}
