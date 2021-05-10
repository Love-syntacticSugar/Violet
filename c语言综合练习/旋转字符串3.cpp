//  AS法二    三步翻转法

#include<stdio.h>
#include<string.h>

void reverse(char* left,char* right);
void reverse(char* left,char* right)
{
	while(left < right)
	{
		char tmp = *left;
		
		*left = *right;
		*right = tmp;
		
		left++;
		right--;
	}

}

void left_move(char* arr,int k); 
void left_move(char* arr,int k)
{
	int len = strlen(arr);
	reverse(arr,arr+k-1);      //逆序左边 
	reverse(arr+k,arr+len-1);		//逆序右边 
	reverse(arr,arr+len-1);		//逆序整体 
}


int main()
{
	printf("Inputing the number you want to revolve:");
	
	char a[] = "abcdefg";
	int k = 0;
	
	scanf("%d",&k);

	left_move(a,k);
	
	printf("%s\n",a);
	
	return 0;
} 
