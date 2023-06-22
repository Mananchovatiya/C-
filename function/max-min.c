#include<stdio.h>
#define n 5
int min(int a[])
{	int c= a[0];
	for(int i=0;i<n;i++)
	{
		if(c>a[i])
		c=a[i];
	}printf("min:%d",c);
}
int max(int a[])
{	
	int b=a[0];
	for(int i=0;i<n;++i)
	{
		if(b<a[i])
		b=a[i];
	}printf("\nmax:%d",b);
	
}
int main()
{	
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter number: ");
		scanf("%d",&a[i]);
	}
	min(a);
	max(a);
}