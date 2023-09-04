#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of first number");
	scanf("%d",&a);
	printf("enter the value of second number");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("the value of the first number after swapping is %d \n",a);
	printf("the value of the second number after swapping is %d",b);
	return 0;
	
}
