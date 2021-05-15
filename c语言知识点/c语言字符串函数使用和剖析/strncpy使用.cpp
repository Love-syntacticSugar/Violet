/* strncpy
	1.多了一个参数：你要拷贝的参数的个数
	2.若被拷贝的字符串为"abc"，但你偏偏要拷贝6个字符，则剩下的字符补为'\0' 
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[10] = "abcdefasf";
	char arr2[] = "bit";
	
	strncpy(arr1,arr2,2);       //真.拷贝---你要拷贝多少拷贝多少，正因此不会把'\0'拷贝过去，所以结果是："bicdef" 
	
	printf("%s\n",arr1);
	
	return 0;
}
