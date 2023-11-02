#include<stdio.h>
int print(int *ptr,int n);
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
        print(arr,n);
}
int print(int *ptr,int n)
{
int i;
for(i=0;i<n;i++)
{
	//printf("%d",ptr[i]);
	printf("%d",*(ptr++));
}
}
