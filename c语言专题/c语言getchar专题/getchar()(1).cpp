#include<stdio.h>
int main()
{
	char c;
	
	c = getchar();  //1.现在具体解释一下getchar ：假设你输入字母c，则getchar()此时对应的意思等价于 getchar()=99  ，这个99是字母c对应的asc||码 
					//不要问nt问题：给字符c赋值99？？  若觉得不行请移步 'c语言零散知识点--char1'
	              //2.又假设你输入chafkajsfhaj，getchar()此时对应的意思仍然等价于 getchar()=99  ，这个99是字母c对应的asc||码。因为它只读第一个字符剩下的留在缓冲区 
	printf("%c\n",c);
	printf("%d\n",c);
	 
	return 0;
}

//注意：getchar是宏定义，不是函数 
