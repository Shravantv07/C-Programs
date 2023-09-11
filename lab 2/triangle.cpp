#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the length of first side");
	scanf("%d",&a);
	printf("enter the length of second side");
	scanf("%d",&b);
	printf("enter the length of third side");
	scanf("%d",&c);
	if (a==b && a==c)
	printf("it is an equilateral triangle");
	else if(a!=b && a!=c && b!=c)
	printf("it is a scalene triangle");
	else
	printf("it is an isoceles triangle");
	return 0;
	
}
