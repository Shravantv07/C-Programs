#include<stdio.h>
int main()
{
	int N,i;
	printf("enter the value of N");
	scanf("%d",&N);
	for(i=0;i<=N;i++)
	{
		if(i%2!=0)
		{
			printf("%d \n",i);
		}
	}
	
}
