#include<stdio.h>
int main()
{
	int a = 10;
	int arr[10] = {0};
	
	printf("%d\n",sizeof a);          //����ʡ������ 
	printf("%d\n",sizeof(int));		  //������ʡ������ 
	printf("%d\n",sizeof(int [10]));   //����д�� 
	
	return 0;
}
