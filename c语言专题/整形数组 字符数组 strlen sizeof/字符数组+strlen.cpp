//�ַ�����+strlen

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[] = {'a','b','c','d','e'};
	
	printf("%d\n",strlen(arr));		  	 //���ֵ 
	printf("%d\n",strlen(arr+0));		//���ֵ��strlen��'\0'Ϊ�յ㣬��Ȼֻ����һ���ַ��������ǻ����Ѱ��'\0'ֱ���ҵ�'\0'Ϊֹ   IMIMIM������ 
//	printf("%d\n",strlen(*arr));	//strlenҪ���ǵ�ַ��*arr = 'a' = 97������strlen���97������ַȥ������������ݿ����ǲ����ַ�����'\0'�������ǷǷ����ʣ�������ᱨ�� 
//	printf("%d\n",strlen(arr[1]));	//ͬ����һ�� 
//	printf("%d\n",strlen(&arr));	 //������Ƶ���ԣ��ҵĲ��С��е�ԭ��&arr��arr��arr[0]�ĵ�ַһ���� ���е�ԭ��&arr����һ��������ĵ�ַ����strlen֮����������һ��������ॸ����ʵĳ���  
	printf("%d\n",strlen(*&arr));	
//	printf("%d\n",strlen(&arr+1));	//ͬ��14�� 
	printf("%d\n",strlen(&arr[0]));
	printf("%d\n",strlen(&arr[0]+1));	
	
	return 0;
}
