#include<stdio.h>
struct Book
{
	char name[20];
	int price;
};
int main()
{
	struct Book book1 = {"c语言",22
	};
	struct Book* p = &book1;
	
	//  .的用法：结构体变量.成员 
	printf("%s\n",book1.name);
	printf("%d\n",book1.price);
	
	//  ->的用法：结构体指针->成员 
	printf("%s\n",p->name);
	printf("%d\n",p->price);
	return 0;
}

/* 补充：若要改变book1中的值，有以下注意点 
	1. book1.price = 55；  该用法正确，因为 book1.price为左值，所以可以改变
	2. book1.name = "c++"； 该用法错误，因为book1.name代表首字符地址，是常量，不可改变，也因此是右值。所以不能给它赋值
		那要怎么样改变book1.name的值呢？
		需要用到 库函数string.h中的字符串拷贝函数strcpy()，具体用法如下：
		strcpy(book1.name,"c++"); 
*/
