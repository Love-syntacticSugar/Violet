/* strerror
	char* strerror (int errnum)
	���ش���������Ӧ�Ĵ�����Ϣ
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
