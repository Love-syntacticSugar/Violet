# include <stdio.h>
# include <math.h>  
int main(void)
{
    int i;  
    int x;  
    for (i=1; i<1000; ++i)
    {
        x = sqrt(i);  //���i������ȫƽ����, ��ôsqrt(i)�϶���С��, ��x��int��, ����x��sqrt(i)ȡ�����ֵ, ����x*x�϶�������i*i 
                      //����OW���� if(i%sqrt(i)==0),�Ǵ�ġ�   �ص㣡������Ϊ����ֻ������������ 
        if (x*x == i)
        {
            printf("%d\t", i);  //�ص㣡��������   \t��������һ��Tabλ��
        }
    }
    printf("\n");
    return 0;
}
