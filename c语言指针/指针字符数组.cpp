#include <stdio.h>
int main()
{
char *str[3]={
    "Hello,thisisasample!",
    "Hi,goodmorning.",
    "Helloworld"
};
return 0;
}
/*  1.只看 char str[3]，它代表str存储了3个字符 ；  
	再看char *str[3]，它代表一个指针字符数组，str存储了3个字符指针（*p1，*p2，*p3），而每个字符指针都定义了一个对应的字符串，即（*p1 = "Hello,thisisasample!"...） 
	 故 p1 = &'H'
	2.我们这样看：str[3] = {*p1,*p2,*p3}   就清晰易懂
	故	（1）str = &*p1 ，  str它的类型是char **，它指向的类型是char * 
		(2) *str = *&*p1 = *p1 ,   *str它的类型是char *，它所指向的类型是char，它指向的地址是字符串"Hello,thisisasample!"的第一个字符的地址，即'H'的地址
			之前不是很明白*什么时候看成 取值，什么时候看成 取址 ，现在有点懂了。应该是具体情况具体分析，以这里的为例：*str中我们第一时间肯定要想str代表什么，
			很明显是地址，那么*自然而然是 取值，如果你把它理解为 取址，我真想给你两巴掌，我们什么时候理解为取址的？是不是定义的时候？那这里定义了吗？ 	
		(3) str+1 = &*p2       str+1它的类型是char**，它指向的类型是char*
		(4) *(str+1) = *&*p2 = *p2   *(str+1)它的类型是char*，它所指向的类型是char，它指向"Hi,goodmorning."的第一个字符'H'    
*/


