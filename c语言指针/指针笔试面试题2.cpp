//����ǿ�����������Լ��������ģ���
//���⣺��֪ p�ĵ�ַ��ʮ����������0x00000000,�������´�ӡ��� 

#include<stdio.h>

struct Test 
{
	int num;
	char* pname;
	short ss;
	char ch[2];
	short sba[4];
}* p;

int main()
{	 
	printf("%d\n",sizeof(struct Test));          //32��������suicide! 
	printf("%p\n",p + 0x1);						//p�ǽṹ��ָ�룬������struct Test������p+1Ҫ��32���ֽڡ���0x00000000 + 32 = 0x00000020	
//	printf("%p\n",(unsigned long)p + 0x1);		//�� pǿ������ת��Ϊunsigned long���ͣ����ǰ������ַ����һ�������������Ȼ���ټ�һ��Сѧ����Ŀ �����ﱨ���ˣ����������⣩ 
	printf("%p\n",(unsigned int*)p + 0x1);		//�� pǿ������ת��Ϊunsigned int*���ͣ�����p������һ���ṹ��ָ�룬����һ��int*���͵�ָ�룬����p+1�����Ǽ�4���ֽ��easy�� 
	
	return 0;
}
