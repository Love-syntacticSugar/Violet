//easy£¡£¡ 

#include<stdio.h>
int main()
{
	int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
	
	int* p1 = (int*)(&aa + 1);
	int* p2 = (int*)(*(aa + 1));
	
	printf("%d %d\n",*(p1 - 1),*(p2 - 1));
	
	return 0;
}
