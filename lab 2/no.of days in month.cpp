#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the year");
	scanf("%d",&a);
	printf("enter the month number");
	scanf("%d",&b);
	if (b<=12 && b>=1)
	     if (b==(1||3||5||7||8||10||12))
	        printf("there are 31 days in the month");
	     else if(b==(4||6||9||11))
	        printf("there are 30 days in the month");
	     else
	        if(b==2 && a%4==0 && (a%100!=0 || a%400==0))
	           printf("there are 29 days");
	        else
	           printf("there are 28 days");
	else
	printf("enter month number between 1 to 12");
	return 0;
	
	
}
