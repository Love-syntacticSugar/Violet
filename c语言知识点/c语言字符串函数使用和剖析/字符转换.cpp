/* ×Ö·û×ª»»£º
	int tolower(int c); 
	int toupper(int c); 
*/


#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch = 'A';
	
	int ret = tolower(ch);
	
	printf("%c\n",ret);
	
	return 0;
 } 
