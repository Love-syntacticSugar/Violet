#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

int main()
{
	int i;
	srand((unsigned)time( NULL ) );    
	for(i = 0; i < 10;i++) 
	{
		printf("%d\n", rand() );    //��������������Ӧ���Ǿ���һ���Ӷ�Ӧ��һ������������Ǻü���� 
	}
	 return 0; 
}
