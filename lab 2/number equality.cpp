#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	if (a==b && a==c)
	printf("all three numbers are equal %d %d %d",a,b,c);
	else
		printf("all three numbers are not equal %d %d %d",a,b,c);
	return 0;
		
	
}
