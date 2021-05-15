/*字符分类函数：
函数 如果他的参数符合下列条件就返回真（大于0的任意整数） 
iscntrl 任何控制字符
isspace 空白字符：空格’，换页\f'，换行“\n'，回车\r'，制表符“\t'或者垂直制表符“\W'isdigit 十进制数字0~9
isxdigit 十六进制数字，包括所有十进制数字，小写字母a~f，大写字母A~Fislower 小写字母a~z
isupper 大写字母A-Z
isalpha 字母a~z或A~Z
isalnum 字母或者数字，a~z,A~Z,0~9
ispunct 标点符号，任何不属于数字或者字母的图形字符(可打印)
isgraph 任何图形字符
isprint 任何可打印字符，包括图形字符和空白字符 
*/

#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch = '@';
	
	int ret = islower(ch);
	
	printf("%d\n",ret);
	
	return 0;
 } 
