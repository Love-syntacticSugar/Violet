/* 1.strcpy strcat strcmp strmcpy strncat strncmp 操作对象是:字符串，\0
     memcpy memmove memcmp memset 整形数组 浮点型数组 结构体数组       （它们是对内存进行操作） 
memcpy.
void☆memcpy ( void destination, const void ★ source, size_t num);
函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
这个函数在遇到‘\O’的时候并不会停下来。
*/

#include<stdio.h>
#include<string.h>

struct S
{
	char name[20];
	int age;
};

int main()
{	
	struct S arr3[] = {"张三",20,"李四",30};
	struct S arr4[5] = {0};
	
	struct S* p = arr4;
	
	memcpy(arr4,arr3,sizeof(arr3));
	
	printf("%s %d %s %d\n",p->name,p->age,(p+1)->name,(p+1)->age);
	
	return 0;
}
