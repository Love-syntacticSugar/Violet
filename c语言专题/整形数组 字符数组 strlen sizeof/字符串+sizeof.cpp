//×Ö·û´®+sizeof

#include<stdio.h>
int main()
{
	char arr[] = "abcde";
	
	printf("%d\n",sizeof(arr));		
	printf("%d\n",sizeof(arr+0));	
	printf("%d\n",sizeof(*arr));	
	printf("%d\n",sizeof(arr[1]));	
	printf("%d\n",sizeof(&arr));	   
	printf("%d\n",sizeof(*&arr));	
	printf("%d\n",sizeof(&arr+1));	
	printf("%d\n",sizeof(&arr[0]));
	printf("%d\n",sizeof(&arr[0]+1));	
	
	return 0;
}
