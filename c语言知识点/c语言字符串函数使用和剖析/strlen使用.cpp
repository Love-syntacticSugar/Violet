#include<stdio.h>
#include<string.h>

int main()
{
	if(strlen("abc") - strlen("abcdef") > 0)        //����ֱ��"abc"�Ž�ȥŶ 
	{
		printf("A\n");
	}
	else
	{
		printf("B\n");
	}
	
	return 0;
}

/*  ���ͣ�
	strlen �ķ���ֵΪ size_t
	��size_tΪ�� typedef _W64 unsigned int  sizeof_t
	����ֵΪunsigned int��������
	�������� strlen("abc") - strlen("abcdef") == -3    -3�ᱻ�����޷������ֿ���
*/ 
