#include<stdio.h>
int main()
{
	char ret;
	char ch;
	char password[20] = {0};
	printf("请输入密码：");
	
	scanf("%s",password);
	
	while((ch = getchar()) != '\n')         //之前疑惑于为什么要这样写？不能直接getchar()？ 底下有详细解释 
	{									
		;
	}
	
	printf("请确认(Y/N):");
	ret = getchar();
	if(ret == 'Y')
	{
		printf("确认成功！\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
		
}

/*解释：
	非常非常非常重要的知识点：scanf默认的分隔符是所有的空白字符（空格，回车，制表符） 
	举个例子：假设用户输入123456 abcde，这时候就完了吧！中间多了一个空格！scanf只读到空格之前，剩下的全部留在缓冲区，此时很明显一个getchar()显然不够！ 
*/  
