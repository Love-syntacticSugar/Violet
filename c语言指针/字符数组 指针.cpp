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
    ptr++;                           //不同与p++，ptr++是无效操作哦！p++意味着地址&a向后移动一个单元，自然指向&o ； 但是ptr++意味着地址&p向后移动一个单元，它指向哪里呢？没人知道。                             
    printf("**ptr=%c\n",**ptr);
}


