#include <stdio.h>
int main()
{
 int num[8] = {2,4,5,8,4,3,13,31};
 int* p = num;  
 for (int i = 0;i<=8;i++)
 {
     printf("%d\n", *(p+i));   //现在的p是野指针（越界了） 
 }
 return 0;
}

/*
运行结果:
2
4
5
8
4
3
13
31
-858993460（随机数） 
*/

