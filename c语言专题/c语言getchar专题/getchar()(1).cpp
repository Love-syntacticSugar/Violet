#include<stdio.h>
int main()
{
	char c;
	
	c = getchar();  //1.���ھ������һ��getchar ��������������ĸc����getchar()��ʱ��Ӧ����˼�ȼ��� getchar()=99  �����99����ĸc��Ӧ��asc||�� 
					//��Ҫ��nt���⣺���ַ�c��ֵ99����  �����ò������Ʋ� 'c������ɢ֪ʶ��--char1'
	              //2.�ּ���������chafkajsfhaj��getchar()��ʱ��Ӧ����˼��Ȼ�ȼ��� getchar()=99  �����99����ĸc��Ӧ��asc||�롣��Ϊ��ֻ����һ���ַ�ʣ�µ����ڻ����� 
	printf("%c\n",c);
	printf("%d\n",c);
	 
	return 0;
}

//ע�⣺getchar�Ǻ궨�壬���Ǻ��� 
