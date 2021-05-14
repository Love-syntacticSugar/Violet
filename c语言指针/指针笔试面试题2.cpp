//首先强调！这题我自己做出来的！！
//问题：已知 p的地址在十六进制下是0x00000000,试求以下打印结果 

#include<stdio.h>

struct Test 
{
	int num;
	char* pname;
	short ss;
	char ch[2];
	short sba[4];
}* p;

int main()
{	 
	printf("%d\n",sizeof(struct Test));          //32，不会做suicide! 
	printf("%p\n",p + 0x1);						//p是结构体指针，类型是struct Test，所以p+1要加32个字节。即0x00000000 + 32 = 0x00000020	
//	printf("%p\n",(unsigned long)p + 0x1);		//把 p强制类型转换为unsigned long类型，就是把这个地址看成一个正常的数字嘛，然后再加一，小学生题目 （这里报错了，编译器问题） 
	printf("%p\n",(unsigned int*)p + 0x1);		//把 p强制类型转换为unsigned int*类型，就是p不再是一个结构体指针，而是一个int*类型的指针，这样p+1不就是加4个字节嘛（easy） 
	
	return 0;
}
