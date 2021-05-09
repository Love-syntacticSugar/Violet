#include<stdio.h>
void swap(int *x,int *y);
void swap(int *x,int *y)
{
	int temp;
	printf("In swap,before swap:%d %d\n",*x,*y);
	temp = *x;
	*x = *y;
	*y = temp;
	printf("In swap,after swap:%d %d\n",*x,*y);
}
int main()
{
	int x = 3,y = 5;
	printf("In main,before swap:%d %d\n",x,y);
	swap(&x,&y);
	printf("In main,after swap:%d %d\n",x,y);         
}

/*  发现了吗？printf("In main,after swap:%d %d\n",x,y);里面xy的值变为5 3了
	why？
	这就是 指针 的强大之处 
	在未用指针之前，我们仅仅把xy的值告诉了swap，但现在我们告诉swap的是xy的地址。这就相当于给了swap一个强大的工具（指针），让它现在能通过指针去访问main里的内容（有点像授人以鱼不如授人以渔）
	现在它不仅能 访问 内容，它还可以 修改 它内容！（main只能眼睁睁看着自己的数据被修改没有办法）
	举个例子：就像 黑客（swap）通过黑科技（指针）把你电脑（main） 里的内容改了
	
	总的来说：传值就像 除草 ；而传址就像 除根 
*/
