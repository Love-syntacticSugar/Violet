//×Ö·ûÖ¸Õë+strlen

#include<stdio.h>
#include<string.h>

int main()
{
	char* p = "abcde";
	
	printf("%d\n",strlen(p));		  	 
	printf("%d\n",strlen(p+1));	
//	printf("%d\n",strlen(*p));	
//	printf("%d\n",strlen(p[0]));	
//	printf("%d\n",strlen(&p));	 	
//	printf("%d\n",strlen(&p+1));	 
	printf("%d\n",strlen(&p[0]+1));	
	
	return 0;
}
