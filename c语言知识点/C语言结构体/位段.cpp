#include<stdio.h>
struct A
{
	int a:2;      //ð�ź��������ָ����bitλ 
	int b:5;
	int c:10;
	int d:30;
};
int main()
{
	struct A m;
	printf("%d\n",sizeof(m));  //Ϊʲô��8�������������Ƶ λ��15���Ӵ� 
	return 0;
		
}
