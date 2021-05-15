/* strerror
	char* strerror (int errnum)
	返回错误码所对应的错误信息
*/

#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	FILE* pf = fopen("test.txt","r");
	
	if(pf == NULL)
	{
		printf("%s\n",strerror(errno));
	}
	else
	{
		printf("open file success\n");
	}
	
	return 0;
 } 
