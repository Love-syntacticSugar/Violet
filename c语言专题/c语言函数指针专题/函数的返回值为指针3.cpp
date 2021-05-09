# include <stdio.h>
# include <stdlib.h>
int * func_sum(int n);
int * func_sum(int n)
{
    int sum = 0;              //与  函数的返回值为指针2  作比较 
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
//  printf("wait for a while...\n");
    printf("sum:%d\n", *p);
    return 0;
}

/*
在没有第21行代码时，我们发现输出结果是正确的，但加上21行的代码时，结果就错了！！
why？
大牛总结：
其实原因在于，一般的局部变量是存放于栈区的，当函数结束，栈区的变量就会释放掉。 
如果我们在函数内部定义一个变量，在使用一个指针去指向这个变量，当函数调用结束时，这个变量的空间就已经被释放，这时就算返回了该地址的指针，也不一定会得到正确的值。
上面的示例中，在返回该指针后，立即访问，的确是得到了正确的结果，但这只是十分巧合的情况，如果我们等待一会儿再去访问该地址，很有可能该地址已经被其他的变量所占用，这时候得到的就不是我们想要的结果。
甚至更严重的是，如果因此访问到了不可访问的内容，很有可能造成段错误等程序崩溃的情况。

IM！！！因此，在使用指针函数的时候，一定要避免出现返回局部变量指针的情况。
*/

 

