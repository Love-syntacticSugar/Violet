#include<stdio.h>
int main()
{
	int a = 10;
	int arr[10] = {0};
	
	printf("%d\n",sizeof a);          //可以省略括号 
	printf("%d\n",sizeof(int));		  //不可以省略括号 
	printf("%d\n",sizeof(int [10]));   //离谱写法 
	
	return 0;
}
