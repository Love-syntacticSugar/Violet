/*
函数指针的一个非常典型的应用就是回调函数。
什么是回调函数？
回调函数就是一个通过指针函数调用的函数。其将函数指针作为一个参数，传递给另一个函数。
回调函数并不是由实现方直接调用，而是在特定的事件或条件发生时由另外一方来调用的。
同样我们来看一个回调函数的例子：
*/

#include<stdio.h>
#include<stdlib.h>
int func_sum(int n)     //函数功能：实现累加求和
{
	int sum;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
     return sum;
}

int callback(int n, int (*p)(int))    //这个函数是回调函数，其中第二个参数为一个函数指针，通过该函数指针来调用求和函数，并把结果返回给主调函数
{
        return p(n);
}

int main(void)
{
        int n = 0;
        printf("please input number:");
        scanf("%d", &n);
        printf("the sum from 0 to %d is %d\n", n, callback(n, func_sum));       //此处直接调用回调函数，而不是直接调用func_sum函数
        return 0;
}
/*大牛总结：
上面这个简单的demo就是一个比较典型的回调函数的例子。在这个程序中，回调函数callback无需关心func_sum是怎么实现的，只需要去调用即可。
这样的好处就是，如果以后对求和函数有优化，比如新写了个func_sum2函数的实现，我们只需要在调用回调函数的地方将函数指针指向func_sum2即可，而无需去修改callback函数内部。
*/
 

