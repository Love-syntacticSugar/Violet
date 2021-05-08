#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b&&a>c)          /*  &&表示 两个条件都成立则为真   ||表示 一个条件成立即成立 */
	printf("%d\n",a);
	else if (b>a&&b>c)
	printf("%d\n",b);
	else
	printf("%d\n",c);
	return 0;
}
