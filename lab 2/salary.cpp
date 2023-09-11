#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the basic salary");
	scanf("%d",&a);
	c=(a*50)/100;
	if(a>0 && a<50000)
	{
		b=(a*20)/100;
	}
	else 
	{
		b=(a*15)/100;
	}
    d=a+b+c;
	printf("the total salary is %d",d);
	return 0;	
}
