//字符数组+strlen

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[] = {'a','b','c','d','e'};
	
	printf("%d\n",strlen(arr));		  	 //随机值 
	printf("%d\n",strlen(arr+0));		//随机值，strlen以'\0'为终点，虽然只传了一个字符，但还是会继续寻找'\0'直到找到'\0'为止   IMIMIM！！！ 
//	printf("%d\n",strlen(*arr));	//strlen要的是地址，*arr = 'a' = 97，所以strlen会把97当作地址去访问里面的内容看看是不是字符或者'\0'，但这是非法访问（计算机会报错） 
//	printf("%d\n",strlen(arr[1]));	//同理上一行 
//	printf("%d\n",strlen(&arr));	 //鹏哥视频可以，我的不行。行的原因：&arr和arr和arr[0]的地址一样。 不行的原因：&arr代表一整个数组的地址，给strlen之后让它访问一个数组它啷个访问的出来  
	printf("%d\n",strlen(*&arr));	
//	printf("%d\n",strlen(&arr+1));	//同理14行 
	printf("%d\n",strlen(&arr[0]));
	printf("%d\n",strlen(&arr[0]+1));	
	
	return 0;
}
