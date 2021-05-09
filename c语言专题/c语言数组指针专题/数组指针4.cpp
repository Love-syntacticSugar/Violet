#include<stdio.h>
int main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	
	int (*p)[4];         //以后看到它的第一反应我希望是：定义了一个 二维数组(但这个二维数组是通过对p的加法操作得到的) 
	
	p = a;            //这里可以的原因就是a是第一行的地址，它是一整个数组的地址而不是一个元素的地址   这里反而p = &a是错的（因为a代表的是一个二维数组，&a代表整个二维数组的地址） 
	
	
	
	printf("%d\n",(*p)[0]);     /*迷惑于*p中*指向值还是址 （这里底下那段话能帮助你理解它是取值，因为(*p)[4]中（*）是单独分开的，不过为了方便与好看把指针变量p2 前移了而已）
								第五行的 (*p)[4]和第八行的 (*p)[0]样子一样，但意义天差地别 （c语言的魅力） 
								*/		
	printf("%d\n",*(*(p+1)+4));
	
	printf("%d\n",a[1]); 
	printf("%d\n",p[1]); 
	
								
	printf("%d\n",(*p)[8]);       	//为什么(*p)[8]可以打印出来？因为二维数组存放的数据是连续的，(*p)[8]就是(*p)[4]对应的地址+4后所存放的内容，就是二维数组的a[2][4]
									//这种写法显然没有*(*(p+1)+4))来的好,*(*(p+1)+4))是契合我们对二维数组的理解的					

	return 0;
}

/*   大牛总结：这里有个有意思的话题值得探讨一下：平时我们定义指针不都是在数据类型后面加上指针变量名么？
        这个指针p 的定义怎么不是按照这个语法来定义的呢？也许我们应该这样来定义p：
   int (*)[10] p;
   int (*)[10]是指针类型，p是指针变量。这样看起来的确不错，不过就是样子有些别扭。其实数组指针的原型确实就是这样子的，只不过为了方便与好看把指针变量p2 前移了而已。
   你私下完全可以这么理解这点。虽然编译器不这么想。   */
   
/*另一个博主文章
	(1)int*ptr;//指针的类型是int*
	(2)char*ptr;//指针的类型是char*
	(3)int**ptr;//指针的类型是int**
	(4)int(*ptr)[3];//指针的类型是int(*)[3]
	(5)int*(*ptr)[4];//指针的类型是int*(*)[4]  */	 
