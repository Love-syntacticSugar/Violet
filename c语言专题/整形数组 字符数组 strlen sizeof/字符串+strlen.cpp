//×Ö·û´®+strlen

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[] = "abcde";
	
	printf("%d\n",strlen(arr));		  	 
	printf("%d\n",strlen(arr+0));	
//	printf("%d\n",strlen(*arr));	
//	printf("%d\n",strlen(arr[1]));	
//	printf("%d\n",strlen(&arr));	 
	printf("%d\n",strlen(*&arr));	
//	printf("%d\n",strlen(&arr+1));	 
	printf("%d\n",strlen(&arr[0]));
	printf("%d\n",strlen(&arr[0]+1));	
	
	return 0;
}
