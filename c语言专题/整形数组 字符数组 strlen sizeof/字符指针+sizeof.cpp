//�ַ�ָ��+sizeof

#include<stdio.h>
int main()
{
	char* p = "abcde";
	
	printf("%d\n",sizeof(p));	    //���ַ���+sizeof�Աȣ����ĺ�	
	printf("%d\n",sizeof(p+1));	    //��ַ���ǵ�ַ������ʲô������ڵ� 
	printf("%d\n",sizeof(*p));	
	printf("%d\n",sizeof(p[0]));	
	printf("%d\n",sizeof(&p));	  
	printf("%d\n",sizeof(&p+1));	
	printf("%d\n",sizeof(&p[0]+1));	
	
	return 0;
}
