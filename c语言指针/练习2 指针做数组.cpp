#include<stdio.h>
int sum(int *a,int n);
int sum(int *a,int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
        ans+=a[i];            //巨离谱，个人认为是野知识，了解就好，应该用不到，用到再说 
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

