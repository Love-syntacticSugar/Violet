//�����ַ������� 
//  ��һ�� 
#include<stdio.h>
int main()
{
	char sentence[]="aaa";       //�����ַ���������4   Ϊʲô����Ϊaaa���滹��һ��\0 
	char word[100];
	int i;

	for(i=0;sentence[i]!='\0';i++)      //��1���ַ��ǵ����ţ�����   ��2�� sentence[i]!='\0'  �ú�ѧ���� 
	{
		word[i]=sentence[i];
	}
	printf("%s\n",word);
	return 0;
}


/*  ����������ָ�� 
char sentence[] = "Do not go gentle into that good night!", word[100];

char *ch = word;
int i;

for(i = 0; sentence[i] != '\0'; i++){
	*(ch + i) = sentence[i];               //ѧ���������� 
}

*(ch + i) = '\0';                           //���������������������������������� ���ǳ��������� 
printf("ch = %s, word = %s", ch, word);
*/
