#include<stdio.h>
int main()
{
	int a[5],b[5],sum,i;
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]:\n ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Enter b[%d]:\n ",i);
		scanf("%d",&b[i]);
	}
	printf("a\tb\tsum");
	for(i=0;i<5;i++)
	{
		sum=a[i] + b[i];
		printf("\n%d\t%d\t%d",a[i],b[i],sum);
	}
}