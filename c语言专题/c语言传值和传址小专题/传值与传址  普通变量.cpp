#include<stdio.h>
void swap(int x,int y);
void swap(int x,int y)
{
	int temp;
	printf("In swap,before swap:%d %d\n",x,y);
	temp = x;
	x = y;
	y = temp;
	printf("In swap,after swap:%d %d\n",x,y);
}
int main()
{
	int x = 3,y = 5;
	printf("In main,before swap:%d %d\n",x,y);
	swap(x,y);
	printf("In main,after swap:%d %d\n",x,y);         
}

/* ��������printf("In main,after swap:%d %d\n",x,y);�Ĵ�ӡ�������3 5����û�н�����
   why��
   ֪ʶ�㣺ÿ���������ж�����������
   ���ͣ�ÿ������֮�䶼���໥�����ģ���ͬ����֮�䲻�ܡ����ʡ��Է��ı���������swap��xy��ֵ����ȴ��Ӱ��main����xy��ֵ����Ϊmainû��Ȩ��ȥ��xy���ձ���˶��٣�swapҲû�취����mainxy���� 
          ������ܾ���˵swap������xy��ֵ���ǲ��з��ʣ������������������ģ����Ǳ��Ƚ��ܵģ����������Ȩ��������һ��main����xy��ֵ�� 
*/
