#include<stdio.h>
int main()
{
	char c1 = getchar();
	
	char c2 = getchar();
	
	printf("%c\n",c1);
	
	printf("%c\n",c2);
	
	return 0;
}

/*������
1.ʱ���μ�getchar()ֻ�ܶ�һ���ַ����� 
2.ֻҪ�Ǽ����ϵĶ����ַ��������ո�ͻس���
3.IM�������հ��ַ�ָ���ǿո�space���س�enter���Ʊ��table����getchar()(6)�����̫��Ҫ�ˣ�����
4.����������: a+�س� =  a+'\n'
	���һ��getchar()����a�ַ�(��ʱ'\n'�����˻������ȴ���һ��getchar()����) ��Ȼ��ڶ���getchar()����'\n'�ַ� 
*/
