#include<stdio.h>
void swap(int *x,int *y);
void swap(int *x,int *y)
{
	int temp;
	printf("In swap,before swap:%d %d\n",*x,*y);
	temp = *x;
	*x = *y;
	*y = temp;
	printf("In swap,after swap:%d %d\n",*x,*y);
}
int main()
{
	int x = 3,y = 5;
	printf("In main,before swap:%d %d\n",x,y);
	swap(&x,&y);
	printf("In main,after swap:%d %d\n",x,y);         
}

/*  ��������printf("In main,after swap:%d %d\n",x,y);����xy��ֵ��Ϊ5 3��
	why��
	����� ָ�� ��ǿ��֮�� 
	��δ��ָ��֮ǰ�����ǽ�����xy��ֵ������swap�����������Ǹ���swap����xy�ĵ�ַ������൱�ڸ���swapһ��ǿ��Ĺ��ߣ�ָ�룩������������ͨ��ָ��ȥ����main������ݣ��е����������㲻���������棩
	������������ ���� ���ݣ��������� �޸� �����ݣ���mainֻ�������������Լ������ݱ��޸�û�а취��
	�ٸ����ӣ����� �ڿͣ�swap��ͨ���ڿƼ���ָ�룩������ԣ�main�� ������ݸ���
	
	�ܵ���˵����ֵ���� ���� ������ַ���� ���� 
*/
