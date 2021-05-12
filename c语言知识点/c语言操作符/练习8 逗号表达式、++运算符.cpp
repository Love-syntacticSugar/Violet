#include<stdio.h>
int main()
{
	int a,b,c;
	a = 5;
	c = ++a;               //a = 6 ; c = 6
	b = ++c,c++,++a,a++;   //注意！！  =的优先级大于，    所以1. b = ++c得出：c = 7;b = 7   2. c++得出：c = 8   3. ++a得出：a = 7   4. a++得出：a = 8      综合1234得：a=8;b=7;c=8 
	b += a++ + c;		  //注意怎么算的步骤：1. b = b + a++ + c   2.  b = b + a + c 和 a = a + 1(就是把式子拆开来，并且把a的自增放最后)         由此得出：a=9;b=23;c=8
	
	printf("%d %d %d\n",a,b,c);
	
	return 0; 
}
