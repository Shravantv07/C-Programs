#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("the sum of the two numbers is %d\n",c);
	printf("the difference of the two numbers is %d\n",d);
	printf("the product of the two numbers is %d\n",e);
	printf("the divison of the two numbers is %d",f);
	return 0;
	
}
