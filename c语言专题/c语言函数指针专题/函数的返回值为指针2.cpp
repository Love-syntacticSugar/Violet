# include <stdio.h>
# include <stdlib.h>
int * func_sum(int n);
int * func_sum(int n)
{
    static int sum = 0;              //ע�������static����  �����ķ���ֵΪָ��3  ���Ƚ� 
    int *p = &sum;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    return p;
}

int main()
{
    int num = 0;
    printf("please input one number:");
    scanf("%d", &num);
    int *p = func_sum(num); 
    printf("sum:%d\n", *p);
    return 0;
}

