#include<stdio.h>
int main()
{
    char a[20]="You_are_a_girl";
    char *p=a;
    char **ptr=&p;
    
    printf("*p=%c\n",*p);
    p++;
    printf("*p=%c\n",*p);
    
    
    printf("**ptr=%c\n",**ptr);
    ptr++;                           //��ͬ��p++��ptr++����Ч����Ŷ��p++��ζ�ŵ�ַ&a����ƶ�һ����Ԫ����Ȼָ��&o �� ����ptr++��ζ�ŵ�ַ&p����ƶ�һ����Ԫ����ָ�������أ�û��֪����                             
    printf("**ptr=%c\n",**ptr);
}


