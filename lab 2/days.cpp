#include<stdio.h>;
int main()
{
	int a;
	printf("enter the day number between 1 to 7");
	scanf("%d",&a);
	if (a==1)
	printf("monday");
	if (a==2)
	printf("tuesday");
	if (a==3)
	printf("wednesday");
	if (a==4)
	printf("thursday");
	if (a==5)
	printf("friday");
	if (a==6)
	printf("saturday");
	if (a==7)
	printf("sunday");
	else if(a>7 || a<1)
	printf("please enter a number between 1 to 7");
	return 0;
	
}
