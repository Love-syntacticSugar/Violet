/*�ַ����ຯ����
���� ������Ĳ����������������ͷ����棨����0������������ 
iscntrl �κο����ַ�
isspace �հ��ַ����ո񡯣���ҳ\f'�����С�\n'���س�\r'���Ʊ����\t'���ߴ�ֱ�Ʊ����\W'isdigit ʮ��������0~9
isxdigit ʮ���������֣���������ʮ�������֣�Сд��ĸa~f����д��ĸA~Fislower Сд��ĸa~z
isupper ��д��ĸA-Z
isalpha ��ĸa~z��A~Z
isalnum ��ĸ�������֣�a~z,A~Z,0~9
ispunct �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ�(�ɴ�ӡ)
isgraph �κ�ͼ���ַ�
isprint �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ� 
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
