//出用 50元、20元 和 10元换算 100元有几种方式？
# include <stdio.h>
int main()
{
    int w, e, s;  //w代表wushi；e代表ershi；s代表shi
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
                                                         //启发：如果一个题目能用树状图表示出来，就可以利用for循环 
