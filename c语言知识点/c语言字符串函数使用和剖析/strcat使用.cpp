/* strcat����
	char*strcat(char* destination,const char* source)
	1.Դ�ַ���������'\0'  
	2.Ŀ��ռ���Ҫ�㹻����ȷ���ܴ��Դ�ַ���
	3.��Ŀ���ַ�����\0����׷�� 
	4.�����Լ����Լ�׷��  ��why������strcat��ʵ�־Ͷ��ˣ��� 
*/
	
#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[30] = "abc\0asfafvavavaas";       //����char arr1[] = "abcafsf"; ��Ϊ����\0����׷�ӵģ������ַ������Ȳ������׷�ӵ��ַ��� 
	char arr2[] = "defda";
	
	strcat(arr1,arr2);       //ע�⣡���� strcat(arr1,arr1);Ҳ����˵�����Լ�׷���Լ� 
	
	printf("%s\n",arr1);
	
	return 0;
}

