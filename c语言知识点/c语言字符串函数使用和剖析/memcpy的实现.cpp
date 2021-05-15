#include<stdio.h>
#include<assert.h>

struct S
{
	char name[20];
	int age;
};

void* my_memcpy(void* dest,const void* src,size_t num);
void* my_memcpy(void* dest,const void* src,size_t num)
{
	assert(dest && num);
	
	while(num--)
	{
		*(char*)dest = *(char*)src;
		(char*)dest++;
		(char*)src++;
	}
	return dest;
}

int main()
{	
	struct S arr3[] = {"张三",20,"李四",30};
	struct S arr4[5] = {0};
	
	struct S* p = arr4;
	
	my_memcpy(arr4,arr3,sizeof(arr3));
	
	printf("%s %d %s %d\n",p->name,p->age,(p+1)->name,(p+1)->age);
	
	return 0;
}
