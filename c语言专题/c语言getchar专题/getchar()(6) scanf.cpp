#include<stdio.h>
int main()
{
	char ret;
	char ch;
	char password[20] = {0};
	printf("���������룺");
	
	scanf("%s",password);
	
	while((ch = getchar()) != '\n')         //֮ǰ�ɻ���ΪʲôҪ����д������ֱ��getchar()�� ��������ϸ���� 
	{									
		;
	}
	
	printf("��ȷ��(Y/N):");
	ret = getchar();
	if(ret == 'Y')
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	return 0;
		
}

/*���ͣ�
	�ǳ��ǳ��ǳ���Ҫ��֪ʶ�㣺scanfĬ�ϵķָ��������еĿհ��ַ����ո񣬻س����Ʊ���� 
	�ٸ����ӣ������û�����123456 abcde����ʱ������˰ɣ��м����һ���ո�scanfֻ�����ո�֮ǰ��ʣ�µ�ȫ�����ڻ���������ʱ������һ��getchar()��Ȼ������ 
*/  
