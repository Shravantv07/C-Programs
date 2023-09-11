#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a>b && a>c)
	    {printf("a is greatest");
	}
	else if (b>c)
	    {printf("b is greatest");
	}
	else
	    {printf("c is greatest");
	}
	return 0;    
	      
}
