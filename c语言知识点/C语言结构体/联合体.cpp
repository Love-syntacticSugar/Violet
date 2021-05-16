#include<stdio.h>
union Un
{
	char c;
	int i;
	char arr[8];            //IM！！！这里把char arr[8],看作8个char a;这样就可以轻松做出这道题了，不然很难 
};

int main()
{
	union Un u;
	printf("%d\n",sizeof(u));
	
	printf("%p\n",&u);
	printf("%p\n",&(u.c));
	printf("%p\n",&(u.i));
	
	return 0;	
}

/* 联合体大小的计算：
	1.联合体的大小至少是最大成员的大小
	2.当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍
	例如此题：最大成员大小是5，不是最大对齐数4的整数倍，所以要对齐到4的整数倍8
	因此答案是8
*/ 
	 
