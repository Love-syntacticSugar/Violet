#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

int main()
{
	int i;
	srand((unsigned)time( NULL ) );    
	for(i = 0; i < 10;i++) 
	{
		printf("%d\n", rand() );    //这里产生的随机数应该是具体一秒钟对应的一组随机数，不是好几秒的 
	}
	 return 0; 
}
