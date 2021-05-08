#include<stdio.h>

int main() 
{
    int i = 0x12345678;
    
    printf("i 的地址是：%p\n", &i);
    
    char *p = (char *)&i;           //类型转换只是临时性的！！！！！！！！！！！！！！！！ 
    
    printf("%x\n",*&i);          //说明&i指向的储存空间还是4个字节
    printf("%x\n",*p);    
	       

    printf("%x\n",i);            
    printf("%p==>%x\n",&i, i);          //这一步是为了和下一步做对比，同样的地址，但打印结果不一样 。因为所指向的内存空间大小不一样，&i指向的储存空间是4个字节 
    printf("%p==>%x\n",p, *p);			// p指向的储存空间是1个字节
    printf("%p==>%x\n",p+1, *(p+1));
    printf("%p==>%x\n",p+2, *(p+2));
    printf("%p==>%x\n",p+3, *(p+3));
    return 0;
}
