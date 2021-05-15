//strncmp 

#include<stdio.h>
#include<string.h>

int main()
{
	char* p1 = "abcdgffjnf";
	char* p2 = "abcsavfav";
	
	int ret = strncmp(p1,p2,3);
	
	printf("%d\n",ret);
	
	return 0;
	
 } 
