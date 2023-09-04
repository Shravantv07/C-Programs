#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of first number");
	scanf("%d",&a);
	printf("enter the value of second number");
	scanf("%d",&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("the value of the first number after swapping is %d \n",a);
	printf("the value of the second number after swapping is %d",b);
	return 0;
}
