#include<stdio.h>
int main()
{
	int n,i,a;
	a=1;
	printf("enter the value of N");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	printf("the factroial of %d is %d",n,a);
}
