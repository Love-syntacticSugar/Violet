//���� 50Ԫ��20Ԫ �� 10Ԫ���� 100Ԫ�м��ַ�ʽ��
# include <stdio.h>
int main()
{
    int w, e, s;  //w����wushi��e����ershi��s����shi
    for (w=0; w<=2; ++w)
    {
        for (e=0; e<=5; ++e)
        {
            for (s=0; s<=10; ++s)
            {
                if (100 == 50*w+20*e+10*s)
                {
                    printf("%d  %d  %d\n", w, e, s);
                }
            }
        }
    }
    return 0;
}
                                                         //���������һ����Ŀ������״ͼ��ʾ�������Ϳ�������forѭ�� 
