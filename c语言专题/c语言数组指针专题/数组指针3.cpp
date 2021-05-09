#include <stdio.h>
int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("%p\n", &arr[0]);
    printf("%p\n", arr);          
    printf("%p\n", &arr);   //(1) 背！！！代表的是整个数组的地址（只是显示的时候,显示的是首元素地址，这个我接受不了，就不能给它个新地址吗？但你就是要接受） 							
    printf("%p\n", &arr+1);	//(2)   IM！ 可以看到&arr+1地址增加了40个字节,也就是数组大小(具体见数组指针1)
    printf("%p\n", *&arr);	 // (3)   用数组指针3中  开心消消乐   秒杀！ 
    
	printf("%d\n", arr[0]);     
    printf("%d\n", *arr);      
          
    
    return 0;
}

/*OW总结：
	1.	&arr[0] = arr = &arr
	2.字符数组同理（见c语言数组--字符数组基本知识点） 
*/





