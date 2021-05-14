//复制字符串内容 
//  法一： 
#include<stdio.h>
int main()
{
	char sentence[]="aaa";       //这里字符串长度是4   为什么？因为aaa后面还有一个\0 
	char word[100];
	int i;

	for(i=0;sentence[i]!='\0';i++)      //（1）字符是单引号！！！   （2） sentence[i]!='\0'  好好学！！ 
	{
		word[i]=sentence[i];
	}
	printf("%s\n",word);
	return 0;
}


/*  法二：运用指针 
char sentence[] = "Do not go gentle into that good night!", word[100];

char *ch = word;
int i;

for(i = 0; sentence[i] != '\0'; i++){
	*(ch + i) = sentence[i];               //学！！！！！ 
}

*(ch + i) = '\0';                           //！！！！！！！！！！！！！！！！！ ！非常容易忘！ 
printf("ch = %s, word = %s", ch, word);
*/
