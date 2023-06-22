#include<stdio.h>
#define n 5
int total(int a[])
{	
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("%d",a[i]);
		}
		else
		{
			printf("\n%d\t%d",a[i],a[i]+a[i-1]);
		}
	}
}
int main()
{
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("Enter number: ");
		scanf("\n%d",&a[i]);
	}
	total(a);
}