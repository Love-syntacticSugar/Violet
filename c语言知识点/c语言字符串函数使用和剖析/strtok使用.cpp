/* strtok的剖析 
	char  strtok ( char  str, const char  sep)；
	sep参数是个字符串，定义了用作分隔符的字符集合
    第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
	strtok函数找到str中的下一个标记，并将其用\0结尾，返回一个指向这个标记的指针。       ！划重点：返回一个指向这个标记的指针！！记忆的方法 
	(注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。)
	strtok函数的第一个参数不为NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。    ！划重点：strtok函数将保存它在字符串中的位置
	strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记。(这就是离谱的地方，给它一个空指针，它能找到上次保存的位置,可以把NULL理解为一个引子) 
	如果字符串中不存在更多的标记 则返回NULL指针.(返回值：返回下一个分割后的字符串指针，如果已无从分割则返回NULL。)
*/


#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "zpw@bitedu.tech";
	char* p = "@.";
	char buf[1024] = {0};
	
	strcpy(buf,arr);
	
	char* ret = NULL;
	
	for(ret = strtok(arr,p);ret != NULL;ret = strtok(NULL,p))
	{
		printf("%s\n",ret);
	 } 
	 
	 return 0;
}
