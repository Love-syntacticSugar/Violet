#include <stdio.h>
int main()
{
 int num[8] = {2,4,5,8,4,3,13,31};
 int* p = num;  
 for (int i = 0;i<=8;i++)
 {
     printf("%d\n", *(p+i));   //���ڵ�p��Ұָ�루Խ���ˣ� 
 }
 return 0;
}

/*
���н��:
2
4
5
8
4
3
13
31
-858993460��������� 
*/

