#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter physics marks");
	scanf("%d",&a);
	printf("enter chemistry marks");
	scanf("%d",&b);
	printf("enter biology marks");
	scanf("%d",&c);
	printf("enter maths marks");
	scanf("%d",&d);
	printf("enter computer marks");
	scanf("%d",&e);
	f=(a+b+c+d+e)/5;
	if (f >=90)
	printf("A grade");
    if (f >=80 && f<90)
    printf("B grade");
    if (f >=70 && f<80)
    printf("C grade");
    if (f >=60 && f<70)
    printf("D grade");
    if (f >=40 && f<60)
    printf("E grade");
    if (f <40)
    printf("F grade");
	return 0;
	
}
