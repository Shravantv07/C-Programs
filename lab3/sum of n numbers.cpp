#include<stdio.h>
int main()
{
	int n,i,a;
	a=0;
	printf("enter the value of N");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a+i;
	}
	printf("the sum of first %d  natural numbers is %d",n,a);
}
