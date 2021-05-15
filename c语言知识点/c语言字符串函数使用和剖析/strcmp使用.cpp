/* strcmp
	比较两个字符串 str1和str2 (从第一个字母开始比较ASCII码值，若第一个字母相同则比较下一个，直到比出来为止)
	若str1 > str2，则返回大于0的数字
	若str1 = str2，则返回大于0的数字
	若str1 < str2，则返回大于0的数字
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char* p1 = "qbc";
	char* p2 = "abc";
	
	int ret = strcmp(p1,p2);
	
	printf("%d\n",ret);
	
	return 0;
	
 } 
