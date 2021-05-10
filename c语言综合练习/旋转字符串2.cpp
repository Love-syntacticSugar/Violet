// 法二AS  暴力求解法 

#include<stdio.h>
#include<string.h> 

void left_move(char* arr,int k);
void left_move(char* arr,int k)
{
	int i = 0;
	int len = strlen(arr);
	
	for(i = 0;i < k;i++)
	{
		//左旋一个字符
		char tmp = *arr;
		//将后面字符全部前移
		int j = 0;
		for(j = 0;j < len-1;j++)
		{
			*(arr+j) = *(arr+j+1);
		} 
		//将左旋的那个字符放最后面 
		*(arr+len-1) = tmp;
	}
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

