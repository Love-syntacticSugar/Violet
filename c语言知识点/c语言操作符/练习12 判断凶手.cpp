/*����Ϊ�ĸ����ɷ����ʣ�
	a��������
	b����c
	c: ��d
	d�������� 
4������3����˵���滰��һ����˵�˼ٻ� 
�ж�˭�����֣� 
*/

#include<stdio.h>
int main()
{
	int killer = 0;
	
	for(killer = 'a';killer <= 'd';killer++)
	{
		if((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer = %c\n",killer);
		}
	}
	return 0;
}
