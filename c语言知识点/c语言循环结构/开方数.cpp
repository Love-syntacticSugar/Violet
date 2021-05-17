# include <stdio.h>
# include <math.h>  
int main(void)
{
    int i;  
    int x;  
    for (i=1; i<1000; ++i)
    {
        x = sqrt(i);  //如果i不是完全平方数, 那么sqrt(i)肯定是小数, 而x是int型, 所以x是sqrt(i)取整后的值, 这样x*x肯定不等于i*i 
                      //这里OW用了 if(i%sqrt(i)==0),是错的。   重点！！！因为除余只能用整数！！ 
        if (x*x == i)
        {
            printf("%d\t", i);  //重点！！！！！   \t是跳到下一个Tab位置
        }
    }
    printf("\n");
    return 0;
}
