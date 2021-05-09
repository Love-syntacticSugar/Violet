#include<stdio.h>
int main()
{
	char str[100];
	scanf("%s",str);			//记忆点：%c -> %s 可以连续输一整串字符 
//	scanf("%c",str);         语法没错，但只能读一个字符（易理解） 
	
//	printf("%c\n",str);      语法错误，str是地址，你让电脑读%c它啷个读的出来     但是你可以 str -> *str 就可以了 
	printf("%s\n",str);       //重点！！尽管str代表第一个字符的地址，但是打印%s，它能顺藤摸瓜通过 一个字符的地址找到其它字符 
							  //这个真的离谱，每过一段时间去看都觉得离谱，因为没有语法可以寻找 
	return 0;
}




