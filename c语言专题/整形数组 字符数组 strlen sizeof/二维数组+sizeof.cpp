//��ά����+sizeof 

#include<stdio.h>

int main()
{
	int a[3][4] = {0};
	
	printf("%d\n",sizeof(a));           //������Ԫ�صĵ�ַ�������⣡�����������飡  ---48 
	printf("%d\n",sizeof(a[0][0]));     //                                          ----4
	printf("%d\n",sizeof(a[0]));		//Ҳ������Ԫ�ص�ַ����Ҳ�Ǵ����������飡��  ---16
	printf("%d\n",sizeof(a[0]+1));		// = &a[0][1]                               ----8
	printf("%d\n",sizeof(*(a[0]+1)));	// = a[0][1]                                ----4
	printf("%d\n",sizeof(a+1));			// = &a[1]                                  ----8
	printf("%d\n",sizeof(*(a+1))); 		// = a[1]                                   ---16 
	printf("%d\n",sizeof(&a[0]+1));		// = &a[1]                                  ----8 
	printf("%d\n",sizeof(*(&a[0]+1)));	// = a[1]                                   ---16	
	printf("%d\n",sizeof(*a));			// = a[0]                                   ---16
	printf("%d\n",sizeof(a[3]));		//                                          ---16
	
	return 0;
}
