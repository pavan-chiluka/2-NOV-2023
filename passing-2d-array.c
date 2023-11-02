#include<stdio.h>
int print(int (*ptr)[2],int r,int c);
int main()
{
	int r,c,i,j;
	scanf("%d %d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
	print(arr,r,c);
}
int print(int (*ptr)[2],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",*(*(ptr+i)+j));
		}
	}
}
