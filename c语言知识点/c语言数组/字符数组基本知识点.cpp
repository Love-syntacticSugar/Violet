//建议先看（c语言指针--数组指针4） 

#include<stdio.h>
int main()
{
	char word[] = "zack";              
	printf("%p\n", &word[0]);
	printf("%p\n", word); 
	printf("%p\n", &word);
	printf("%p\n", *&word);  
	
	putchar('\n');
	
	printf("%c\n", word[0]);
	printf("%c\n", *word);    
	printf("%s\n", word);
	return 0;
}
