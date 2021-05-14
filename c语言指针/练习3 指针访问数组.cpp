#include<stdio.h>
int main()
{
    int a[10]={0,2,4,6,8,10,12,14,16,18};
    int *p;
    
    for(p = &a[0];p < &a[0]+10;p++)
    {
    	printf("%d ",*p);
	}
 
    return 0;
}
