#include<stdio.h> 

struct A
{
   int Num;
   char *pcName;     //8个字节
   short sDate;
   char cha[2];      //注意！！ 总共2个字节！！别画蛇添足加了'\0' '\0'是储存在 bit里面的，这里是 字节 
   short sBa[4];	//注意！！ 总共8个字节！！别画蛇添足加了'\0' '\0'是储存在 bit里面的，这里是 字节 
};

int main()
{
	struct A a;
	printf("%d\n",sizeof(a));
	return 0;	
}

/*注意
OW电脑是64位系统，所以指针是8个字节
思维误区：不是说8个字节就要用完的，在面对数组时，它储存的就是首地址！！
*/ 

	


