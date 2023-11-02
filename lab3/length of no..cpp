#include<stdio.h>
int main()
{
	int n,i,a;
	i=0;
	printf("enter the number");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		i++;
		n/=10;
	}
	printf("the number %d has %d digits",a,i);
	return 0;


}
