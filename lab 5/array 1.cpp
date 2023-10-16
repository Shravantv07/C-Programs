#include<stdio.h>
int main()
{
	int n,i,j,max,min,sum=0,avg;
	n=5;
	int a[n]={1,2,3,4,5};
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
		if(min>a[i])
		min=a[i];
		sum+=a[i];
		avg=sum/n;
		
	}
	printf("%d %d %d",min,max,avg);
	return 0;
	
}
