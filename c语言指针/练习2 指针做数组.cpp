#include<stdio.h>
int sum(int *a,int n);
int sum(int *a,int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
        ans+=a[i];            //�����ף�������Ϊ��Ұ֪ʶ���˽�ͺã�Ӧ���ò������õ���˵ 
    return ans;
}
int main()
{
    int A[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
	}
	printf("%d\n",sum(A,n));
	return 0;
}

