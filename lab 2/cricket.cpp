#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("enter score for first technique");
	scanf("%d",&a);
	printf("enter score for second technique");
	scanf("%d",&b);
	printf("enter score for third technique");
	scanf("%d",&c);
	if (a>b && a>c)
	    {printf("%d",a);
	}
	else if (b>c)
	    {printf("%d",b);
	}
	else
	    {printf("%d",c);
	}
	return 0;   
}
