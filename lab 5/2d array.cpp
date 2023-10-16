#include<stdio.h>
int main()
{
	int i,j,n=3;
	int a[n][n]={};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d",a[i][j]);
		printf("\n");
	}
	printf("\n");
	return 0;
}
