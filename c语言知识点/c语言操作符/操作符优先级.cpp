#include <stdio.h>
int main()
{
    int arr[10] = {0,9,2,3,4,5,6,7,8,9};
	int* p = arr;
    
	printf("%d\n", *p+1);                //  *���ȼ�����+������ˣ������������� 
    printf("%d\n", *(p+1));      
          
    
    return 0;
}
