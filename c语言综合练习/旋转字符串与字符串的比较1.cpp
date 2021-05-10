// 判断一个字符串是否 等于 另一个字符串旋转后的字符串（旋转数 字符个数k 任意）
//暴力求解 

#include<stdio.h>
#include<string.h>

void reverse(char* left,char* right);        //交换字符串，经典！！ 
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
   
	reverse(arr+k,arr+len-1);	
	reverse(arr,arr+len-1);		
}

int is_left_move(char* s1,char* s2);
int is_left_move(char* s1,char* s2)
{
	int len = strlen(s1);
	int i = 0;
	
	for(i = 0;i < len;i++)
	{
		left_move(s1,1);
		int ret = strcmp(s1,s2);
		if(ret == 0)
		{
			return 1;
		}
	}
	
	return 0;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	
	int ret = is_left_move(arr1,arr2);
	
	if(ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	
	return 0;
 } 
