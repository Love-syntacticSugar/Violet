#include<stdio.h>
struct T
{
	double weight;
	short age;
};

struct S
{
	char c;
	struct T st;
	int a;
	double d;
	char arr[20];
};

int main()
{
	struct S s = {'c',{55.6,30},100,3.14,"hello bit"};
	printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr);
	printf("%lf\n",s.st.weight);
	return 0;
}
