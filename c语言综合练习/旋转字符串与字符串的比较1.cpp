// �ж�һ���ַ����Ƿ� ���� ��һ���ַ�����ת����ַ�������ת�� �ַ�����k ���⣩
//������� 

#include<stdio.h>
#include<string.h>

void reverse(char* left,char* right);        //�����ַ��������䣡�� 
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
