#include<stdio.h>
#include<assert.h>

char* my_strcat(char* dest,const char* src);
char* my_strcat(char* dest,const char* src)
{
	char* ret = dest;
	assert(dest != NULL);         //Ҳ����assert(dest),��ΪNULL == 0 
	assert(src != NULL);			//Ҳ����assert(dest && src) 
	
	while (*dest != '\0')       
	{
		dest++;
	}
	
	while(*dest++ = *src++)
	{
		;
	}
	
	return ret;
}

int main()
{
	char arr1[30] = "abcadssgsg"; 
	char arr2[] = "defda";
	
	my_strcat(arr1,arr2);        
	
	printf("%s\n",arr1);
	
	return 0;
}
