//挺难的，可以的话重温 鹏哥视频--字符函数&内存函数使用和剖析（3）2          非常经典的一道题！！！
//法二：KMP算法---数据结构与算法 

#include<stdio.h>
#include<assert.h> 

char* my_strstr(char* p1,char* p2);
char* my_strstr(char* p1,char* p2)
{
	assert(p1 && p2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = p1;
	
	while(*cur)
	{
		s1 = cur;
		s2 = p2;
		
		while((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL; 
	
}

int main()
{
	char arr1[] = "abbbcdef";                //非常经典的两个字符串！！ 
	char arr2[] = "bbc";
	
	char* ret = my_strstr(arr1,arr2); 
	
	if(ret == NULL)
	{
		printf("子串不存在！");	
	}   
	else
	{
		printf("%s\n",ret);
	} 
	
	return 0;
}
