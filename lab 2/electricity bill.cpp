#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the units of electricty used");
	scanf("%d",&a);
	if(a>0 && a< 100)
	 {
	 	b=a*7;
	 	printf("the electricty bill is %d",b);
	   }  
	else if(a>100 && a<200)
	{
		b=a*10;
		printf("the electricty bill is %d",b);
	}
	else
	{
		b=a*12;
		printf("the electricty bill is %d",b);
	}
	return 0;
}
