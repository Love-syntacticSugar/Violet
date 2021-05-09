#include<stdio.h>
int main()
{
	char c1 = getchar();
	
	char c2 = getchar();
	
	printf("%c\n",c1);
	
	printf("%c\n",c2);
	
	return 0;
}

/*解析：
1.时刻牢记getchar()只能读一个字符！！ 
2.只要是键盘上的都是字符，包括空格和回车！
3.IM补充概念：空白字符指的是空格space，回车enter，制表符table（在getchar()(6)中这个太重要了！！）
4.假设你输入: a+回车 =  a+'\n'
	则第一个getchar()吸收a字符(此时'\n'留在了缓冲区等待下一个getchar()吸收) ；然后第二个getchar()吸收'\n'字符 
*/
