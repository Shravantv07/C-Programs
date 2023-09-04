#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter the marks of the first subject");
	scanf("%d",&a);
	printf("enter the marks of the second subject");
	scanf("%d",&b);
	printf("enter the marks of the third subject");
	scanf("%d",&c);
	printf("enter the marks of the fourth subject");
	scanf("%d",&d);
	printf("enter the marks of the fifth subject");
	scanf("%d",&e);
	f=(a+b+c+d+e)/5;
	printf("the percentage of the student is %d",f);
	return 0;
}

