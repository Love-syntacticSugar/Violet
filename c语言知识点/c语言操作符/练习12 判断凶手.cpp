/*以下为四个嫌疑犯供词：
	a：不是我
	b：是c
	c: 是d
	d：不是我 
4个人中3个人说了真话，一个人说了假话 
判断谁是凶手？ 
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
